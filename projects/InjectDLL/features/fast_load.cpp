////////////////////////////////////////////////
///  zre's fast loader, only use in dev env  ///
////////////////////////////////////////////////

#define ENABLE_FAST_LOAD false

#if ENABLE_FAST_LOAD

#include <Il2CppModLoader/app/methods/Frameworks/loading/Prewarmers/AtlasPrewarmOperation.h>
#include <Il2CppModLoader/app/methods/Frameworks/loading/Prewarmers/LoadIntroLogosPrewarmOperation.h>
#include <Il2CppModLoader/app/methods/Frameworks/loading/Prewarmers/PoolingPrewarmOperation.h>
#include <Il2CppModLoader/app/methods/Frameworks/loading/Prewarmers/ShaderPrewarmOperation.h>
#include <Il2CppModLoader/app/methods/Frameworks/loading/Prewarmers/LoadPoolingPrewarmOperation.h>
#include <Il2CppModLoader/app/methods/Frameworks/loading/Prewarmers/LoadPoolingPrewarmInstancesOperation.h>
#include <Il2CppModLoader/app/methods/LoadingBootstrap.h>
#include <Il2CppModLoader/app/methods/GameController.h>
#include <Il2CppModLoader/app/methods/IntroLogosSkip.h>
#include <Il2CppModLoader/app/methods/SceneRoot.h>
#include <Il2CppModLoader/app/methods/ScenesManager.h>
#include <Il2CppModLoader/app/methods/ScenesManagerSettings.h>
#include <Il2CppModLoader/app/methods/LoadingBoostController.h>
#include <Il2CppModLoader/app/methods/TitleScreenPressStartLogic.h>
#include <Il2CppModLoader/app/methods/TimeUtility.h>
#include <Il2CppModLoader/app/methods/UnityEngine/SceneManagement/SceneManager.h>
#include <Il2CppModLoader/app/methods/UnityEngine/SceneManagement/SceneUtility.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/common.h>
#include <features/scenes/scene_load.h>
#include <game/game.h>
#include <unordered_set>

using namespace app::classes;


namespace {
    IL2CPP_INTERCEPT(frameworks::loading::Prewarmers::ShaderPrewarmOperation, bool, Begin, (app::ShaderPrewarmOperation* this_ptr)) {
        // next::frameworks::loading::Prewarmers::ShaderPrewarmOperation::Begin(this_ptr);
        this_ptr->fields._._PercentDone_k__BackingField = 100.f;
        this_ptr->fields._._IsDone_k__BackingField = true;
        return true;
    }

    IL2CPP_INTERCEPT(frameworks::loading::Prewarmers::AtlasPrewarmOperation, bool, Begin, (app::AtlasPrewarmOperation* this_ptr)) {
        next::frameworks::loading::Prewarmers::AtlasPrewarmOperation::Begin(this_ptr);
        this_ptr->fields._._PercentDone_k__BackingField = 100.f;
        this_ptr->fields._._IsDone_k__BackingField = true;
        return true;
    }

    IL2CPP_INTERCEPT(frameworks::loading::Prewarmers::LoadPoolingPrewarmOperation, bool, Begin, (app::LoadPoolingPrewarmOperation* this_ptr)) {
        next::frameworks::loading::Prewarmers::LoadPoolingPrewarmOperation::Begin(this_ptr);
        this_ptr->fields._._PercentDone_k__BackingField = 100.f;
        this_ptr->fields._._IsDone_k__BackingField = true;
        return true;
    }

    IL2CPP_INTERCEPT(frameworks::loading::Prewarmers::LoadPoolingPrewarmInstancesOperation, bool, Begin, (app::LoadPoolingPrewarmInstancesOperation* this_ptr)) {
        next::frameworks::loading::Prewarmers::LoadPoolingPrewarmInstancesOperation::Begin(this_ptr);
        this_ptr->fields._._PercentDone_k__BackingField = 100.f;
        this_ptr->fields._._IsDone_k__BackingField = true;
        return true;
    }

    IL2CPP_INTERCEPT(frameworks::loading::Prewarmers::PoolingPrewarmOperation, bool, Begin, (app::PoolingPrewarmOperation* this_ptr)) {
        next::frameworks::loading::Prewarmers::PoolingPrewarmOperation::Begin(this_ptr);
        this_ptr->fields._._PercentDone_k__BackingField = 100.f;
        this_ptr->fields._._IsDone_k__BackingField = true;
        return true;
    }

    bool skipped_logos = false;
    float t = 0.f;
    IL2CPP_INTERCEPT(IntroLogosSkip, void, Update, (app::IntroLogosSkip* this_ptr)) {
        t += TimeUtility::get_deltaTime();
        if (!skipped_logos && t > 0.3f) {
            IntroLogosSkip::SkipLogos(this_ptr);
            LoadingBoostController::ApplyBoostModeSettings(app::LoadingBoostController_BoostModeLevel__Enum::Critical);
            skipped_logos = true;
        }
    }


    IL2CPP_INTERCEPT(ScenesManager, void, UnloadAllScenes, (app::ScenesManager* this_ptr)) {
        return;

        if (!ScenesManagerSettings::get_DontUnloadScenes(this_ptr->fields.Settings)) {
            for (int i = 0; i < this_ptr->fields.ActiveScenes->fields._size; ++i) {
                auto scene = this_ptr->fields.ActiveScenes->fields._items->vector[i];

                switch (scene->fields.SceneRoot->fields.m_state) {
                    case app::SceneState__Enum::Loading:
                        ScenesManager::CancelScene(this_ptr, scene);
                        break;
                    case app::SceneState__Enum::LoadingCancelled:
                        break;
                    case app::SceneState__Enum::Loaded:
                    case app::SceneState__Enum::Enabling:
                    case app::SceneState__Enum::Disabled:
                    case app::SceneState__Enum::Enabled:
                    case app::SceneState__Enum::WaitingToDisable:
                    case app::SceneState__Enum::Disabling:
                        SceneRoot::Unload(scene->fields.SceneRoot, false);
                        ScenesManager::RemoveScene(this_ptr, scene, true);
                        break;
                    case app::SceneState__Enum::Unloading:
                        break;
                }
            }
        }
    }
}

#endif