#include <Il2CppModLoader/app/methods/GameController.h>
#include <Il2CppModLoader/app/methods/UnityEngine/Time.h>
#include <Il2CppModLoader/app/methods/UnityEngine/Application.h>
#include <Il2CppModLoader/app/methods/UnityEngine/QualitySettings.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/windows_api/console.h>

#include <game/player.h>
#include <string>

using namespace app::methods;

constexpr int FRAMERATE = 60;
constexpr float DELTA_TIME = 1.f / FRAMERATE;

IL2CPP_INTERCEPT(UnityEngine::Time, float, get_deltaTime, ()) {
    UnityEngine::Application::set_targetFrameRate(FRAMERATE);
    UnityEngine::Time::set_captureFramerate(FRAMERATE);
    UnityEngine::Time::set_fixedDeltaTime(DELTA_TIME);
    UnityEngine::Time::set_maximumDeltaTime(DELTA_TIME);
    UnityEngine::QualitySettings::set_vSyncCount(0);

    return next::UnityEngine::Time::get_deltaTime();
}