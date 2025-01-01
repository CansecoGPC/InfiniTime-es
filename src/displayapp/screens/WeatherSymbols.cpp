#include "displayapp/screens/WeatherSymbols.h"

const char* Pinetime::Applications::Screens::Symbols::GetSymbol(const Pinetime::Controllers::SimpleWeatherService::Icons icon) {
  switch (icon) {
    case Pinetime::Controllers::SimpleWeatherService::Icons::Sun:
      return Symbols::sun;
      break;
    case Pinetime::Controllers::SimpleWeatherService::Icons::CloudsSun:
      return Symbols::cloudSun;
      break;
    case Pinetime::Controllers::SimpleWeatherService::Icons::Clouds:
      return Symbols::cloud;
      break;
    case Pinetime::Controllers::SimpleWeatherService::Icons::BrokenClouds:
      return Symbols::cloudMeatball;
      break;
    case Pinetime::Controllers::SimpleWeatherService::Icons::Thunderstorm:
      return Symbols::bolt;
      break;
    case Pinetime::Controllers::SimpleWeatherService::Icons::Snow:
      return Symbols::snowflake;
      break;
    case Pinetime::Controllers::SimpleWeatherService::Icons::CloudShowerHeavy:
      return Symbols::cloudShowersHeavy;
      break;
    case Pinetime::Controllers::SimpleWeatherService::Icons::CloudSunRain:
      return Symbols::cloudSunRain;
      break;
    case Pinetime::Controllers::SimpleWeatherService::Icons::Smog:
      return Symbols::smog;
      break;
    default:
      return Symbols::ban;
      break;
  }
}

const char* Pinetime::Applications::Screens::Symbols::GetCondition(const Pinetime::Controllers::SimpleWeatherService::Icons icon) {
  switch (icon) {
    case Pinetime::Controllers::SimpleWeatherService::Icons::Sun:
      return "Despejado";
    case Pinetime::Controllers::SimpleWeatherService::Icons::CloudsSun:
      return "Pocas nubes";
    case Pinetime::Controllers::SimpleWeatherService::Icons::Clouds:
      return "Nubes dispersas";
    case Pinetime::Controllers::SimpleWeatherService::Icons::BrokenClouds:
      return "Nubes rotas";
    case Pinetime::Controllers::SimpleWeatherService::Icons::CloudShowerHeavy:
      return "Lluvia intensa";
    case Pinetime::Controllers::SimpleWeatherService::Icons::CloudSunRain:
      return "Lluvia";
    case Pinetime::Controllers::SimpleWeatherService::Icons::Thunderstorm:
      return "Tormenta";
    case Pinetime::Controllers::SimpleWeatherService::Icons::Snow:
      return "Nieve";
    case Pinetime::Controllers::SimpleWeatherService::Icons::Smog:
      return "Niebla";
    default:
      return "";
  }
}
