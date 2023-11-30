////////////////////////////////////////////////
///  zre's fast loader, only use in dev env  ///
////////////////////////////////////////////////

#ifdef ENABLE_FAST_LOAD

#include <Core/api/game/game.h>
#include <Core/api/scenes/scene_load.h>
#include <Modloader/app/methods/Frameworks/loading/Prewarmers/AtlasPrewarmOperation.h>
#include <Modloader/app/methods/Frameworks/loading/Prewarmers/LoadIntroLogosPrewarmOperation.h>
#include <Modloader/app/methods/Frameworks/loading/Prewarmers/LoadPoolingPrewarmInstancesOperation.h>
#include <Modloader/app/methods/Frameworks/loading/Prewarmers/LoadPoolingPrewarmOperation.h>
#include <Modloader/app/methods/Frameworks/loading/Prewarmers/PoolingPrewarmOperation.h>
#include <Modloader/app/methods/Frameworks/loading/Prewarmers/ShaderPrewarmOperation.h>
#include <Modloader/app/methods/GameController.h>
#include <Modloader/app/methods/IntroLogosSkip.h>
#include <Modloader/app/methods/LoadingBoostController.h>
#include <Modloader/app/methods/LoadingBootstrap.h>
#include <Modloader/app/methods/SceneRoot.h>
#include <Modloader/app/methods/ScenesManager.h>
#include <Modloader/app/methods/ScenesManagerSettings.h>
#include <Modloader/app/methods/TimeUtility.h>
#include <Modloader/app/methods/TitleScreenPressStartLogic.h>
#include <Modloader/app/methods/UnityEngine/SceneManagement/SceneManager.h>
#include <Modloader/app/methods/UnityEngine/SceneManagement/SceneUtility.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <unordered_set>

using namespace app::classes;

namespace {
    IL2CPP_INTERCEPT(frameworks::loading::Prewarmers::ShaderPrewarmOperation, bool, Begin, (app::ShaderPrewarmOperation * this_ptr)) {
        // next::frameworks::loading::Prewarmers::ShaderPrewarmOperation::Begin(this_ptr);
        this_ptr->fields._._PercentDone_k__BackingField = 100.f;
        this_ptr->fields._._IsDone_k__BackingField = true;
        return true;
    }

    IL2CPP_INTERCEPT(frameworks::loading::Prewarmers::AtlasPrewarmOperation, bool, Begin, (app::AtlasPrewarmOperation * this_ptr)) {
        next::frameworks::loading::Prewarmers::AtlasPrewarmOperation::Begin(this_ptr);
        this_ptr->fields._._PercentDone_k__BackingField = 100.f;
        this_ptr->fields._._IsDone_k__BackingField = true;
        return true;
    }

    IL2CPP_INTERCEPT(frameworks::loading::Prewarmers::LoadPoolingPrewarmOperation, bool, Begin, (app::LoadPoolingPrewarmOperation * this_ptr)) {
        next::frameworks::loading::Prewarmers::LoadPoolingPrewarmOperation::Begin(this_ptr);
        this_ptr->fields._._PercentDone_k__BackingField = 100.f;
        this_ptr->fields._._IsDone_k__BackingField = true;
        return true;
    }

    IL2CPP_INTERCEPT(frameworks::loading::Prewarmers::LoadPoolingPrewarmInstancesOperation, bool, Begin, (app::LoadPoolingPrewarmInstancesOperation * this_ptr)) {
        next::frameworks::loading::Prewarmers::LoadPoolingPrewarmInstancesOperation::Begin(this_ptr);
        this_ptr->fields._._PercentDone_k__BackingField = 100.f;
        this_ptr->fields._._IsDone_k__BackingField = true;
        return true;
    }

    IL2CPP_INTERCEPT(frameworks::loading::Prewarmers::PoolingPrewarmOperation, bool, Begin, (app::PoolingPrewarmOperation * this_ptr)) {
        next::frameworks::loading::Prewarmers::PoolingPrewarmOperation::Begin(this_ptr);
        this_ptr->fields._._PercentDone_k__BackingField = 100.f;
        this_ptr->fields._._IsDone_k__BackingField = true;
        return true;
    }

    bool skipped_logos = false;
    float t = 0.f;
    IL2CPP_INTERCEPT(IntroLogosSkip, void, Update, (app::IntroLogosSkip * this_ptr)) {
        t += TimeUtility::get_deltaTime();
        if (!skipped_logos && t > 0.3f) {
            IntroLogosSkip::SkipLogos(this_ptr);
            LoadingBoostController::ApplyBoostModeSettings(app::LoadingBoostController_BoostModeLevel__Enum::Critical);
            skipped_logos = true;
        }
    }

    IL2CPP_INTERCEPT(ScenesManager, void, UnloadAllScenes, (app::ScenesManager * this_ptr)) {
        return;

        if (!ScenesManagerSettings::get_DontUnloadScenes(this_ptr->fields.Settings)) {
            for (auto scene: il2cpp::ListIterator(this_ptr->fields.ActiveScenes)) {
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
} // namespace

#endif
