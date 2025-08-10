////////////////////////////////////////////////
///  zre's fast loader, only use in dev env  ///
////////////////////////////////////////////////

#ifdef ENABLE_FAST_LOAD

    #include <Core/api/faderb.h>
    #include <Core/api/game/game.h>
    #include <Core/api/scenes/scene_load.h>
    #include <Modloader/app/methods/CharacterFactory.h>
    #include <Modloader/app/methods/Core/Input.h>
    #include <Modloader/app/methods/Frameworks/loading/Prewarmers/AtlasPrewarmOperation.h>
    #include <Modloader/app/methods/Frameworks/loading/Prewarmers/LoadIntroLogosPrewarmOperation.h>
    #include <Modloader/app/methods/Frameworks/loading/Prewarmers/LoadPoolingPrewarmInstancesOperation.h>
    #include <Modloader/app/methods/Frameworks/loading/Prewarmers/LoadPoolingPrewarmOperation.h>
    #include <Modloader/app/methods/Frameworks/loading/Prewarmers/PoolingPrewarmOperation.h>
    #include <Modloader/app/methods/Frameworks/loading/Prewarmers/ShaderPrewarmOperation.h>
    #include <Modloader/app/methods/GameController.h>
    #include <Modloader/app/methods/GameStateMachine.h>
    #include <Modloader/app/methods/GoToSceneController.h>
    #include <Modloader/app/methods/IntroLogosSkip.h>
    #include <Modloader/app/methods/LoadingBoostController.h>
    #include <Modloader/app/methods/LoadingBootstrap.h>
    #include <Modloader/app/methods/MoonGuid.h>
    #include <Modloader/app/methods/SceneRoot.h>
    #include <Modloader/app/methods/ScenesManager.h>
    #include <Modloader/app/methods/ScenesManagerSettings.h>
    #include <Modloader/app/methods/SeinCharacter.h>
    #include <Modloader/app/methods/SystemIntegration/PlatformServiceProvider.h>
    #include <Modloader/app/methods/TimeUtility.h>
    #include <Modloader/app/methods/TitleScreenPressStartLogic.h>
    #include <Modloader/app/methods/UnityEngine/SceneManagement/SceneManager.h>
    #include <Modloader/app/methods/UnityEngine/SceneManagement/SceneUtility.h>
    #include <Modloader/app/types/Characters.h>
    #include <Modloader/app/types/GameStateMachine.h>
    #include <Modloader/app/types/GoToSceneController.h>
    #include <Modloader/il2cpp_helpers.h>
    #include <Modloader/interception_macros.h>
    #include <Modloader/modloader.h>
    #include <Modloader/windows_api/console.h>
    #include <unordered_set>

using namespace app::classes;

namespace {
    IL2CPP_INTERCEPT(bool, frameworks::loading::Prewarmers::ShaderPrewarmOperation, Begin, app::ShaderPrewarmOperation * this_ptr) {
        // next::frameworks::loading::Prewarmers::ShaderPrewarmOperation::Begin(this_ptr);
        this_ptr->fields._._PercentDone_k__BackingField = 100.f;
        this_ptr->fields._._IsDone_k__BackingField = true;
        return true;
    }

    IL2CPP_INTERCEPT(bool, frameworks::loading::Prewarmers::AtlasPrewarmOperation, Begin, app::AtlasPrewarmOperation * this_ptr) {
        next::frameworks::loading::Prewarmers::AtlasPrewarmOperation::Begin(this_ptr);
        this_ptr->fields._._PercentDone_k__BackingField = 100.f;
        this_ptr->fields._._IsDone_k__BackingField = true;
        return true;
    }

    IL2CPP_INTERCEPT(bool, frameworks::loading::Prewarmers::LoadPoolingPrewarmOperation, Begin, app::LoadPoolingPrewarmOperation * this_ptr) {
        next::frameworks::loading::Prewarmers::LoadPoolingPrewarmOperation::Begin(this_ptr);
        this_ptr->fields._._PercentDone_k__BackingField = 100.f;
        this_ptr->fields._._IsDone_k__BackingField = true;
        return true;
    }

    IL2CPP_INTERCEPT(bool, frameworks::loading::Prewarmers::LoadPoolingPrewarmInstancesOperation, Begin, app::LoadPoolingPrewarmInstancesOperation * this_ptr) {
        next::frameworks::loading::Prewarmers::LoadPoolingPrewarmInstancesOperation::Begin(this_ptr);
        this_ptr->fields._._PercentDone_k__BackingField = 100.f;
        this_ptr->fields._._IsDone_k__BackingField = true;
        return true;
    }

    IL2CPP_INTERCEPT(bool, frameworks::loading::Prewarmers::PoolingPrewarmOperation, Begin, app::PoolingPrewarmOperation * this_ptr) {
        next::frameworks::loading::Prewarmers::PoolingPrewarmOperation::Begin(this_ptr);
        this_ptr->fields._._PercentDone_k__BackingField = 100.f;
        this_ptr->fields._._IsDone_k__BackingField = true;
        return true;
    }

    bool skipped_logos = false;
    float t = 0.f;
    IL2CPP_INTERCEPT_WITH_ORDER(-10, void, IntroLogosSkip, Update, app::IntroLogosSkip * this_ptr) {
        t += TimeUtility::get_deltaTime();
        if (!skipped_logos && t > 0.3f) {
            IntroLogosSkip::SkipLogos(this_ptr);
            LoadingBoostController::ApplyBoostModeSettings(app::LoadingBoostController_BoostModeLevel__Enum::Critical);
            skipped_logos = true;
        }
    }

    IL2CPP_INTERCEPT(void, ScenesManager, UnloadAllScenes, app::ScenesManager * this_ptr) {
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

    /*
    IL2CPP_INTERCEPT(void, ScenesManager, AdditivelyLoadSceneFile, app::ScenesManager * this_ptr, app::RuntimeSceneMetaData* runtime_meta, bool async, bool keep_preloaded, bool load_dependant_scenes, bool scene_already_loaded) {
        const auto name = il2cpp::convert_csstring(runtime_meta->fields.Scene);
        modloader::win::console::console_send(name);

        if (name == "kuFlyAway") {
            return;
        }

        next::ScenesManager::AdditivelyLoadSceneFile(this_ptr, runtime_meta, async, keep_preloaded, load_dependant_scenes, scene_already_loaded);
    }

    IL2CPP_INTERCEPT(void, TitleScreenPressStartLogic, OnEnable, app::TitleScreenPressStartLogic* this_ptr) {
        core::api::faderb::fade_out(0.5f);
        next::TitleScreenPressStartLogic::OnEnable(this_ptr);
    }

    IL2CPP_INTERCEPT(void, TitleScreenPressStartLogic, FixedUpdate, app::TitleScreenPressStartLogic* this_ptr) {
        const auto game_state_machine = GameStateMachine::get_Instance();
        if (
            game_state_machine->fields._CurrentState_k__BackingField != app::GameStateMachine_State__Enum::StartScreen &&
            game_state_machine->fields._CurrentState_k__BackingField != app::GameStateMachine_State__Enum::TitleScreen
        ) {
            return;
        }

        if (Core::Input::get_OnAnyButtonPressed()) {
            const auto game_controller = core::api::game::game_controller();
            const auto platform_service_provider = game_controller->fields._PlatformServiceProvider_k__BackingField;

            if (platform_service_provider->fields.m_primarySignInProvider != nullptr) {
                TitleScreenPressStartLogic::OnStartPressedCallback(this_ptr);
                return;
            }

            if (
                !SystemIntegration::PlatformServiceProvider::get_IsPrimarySignedIn(platform_service_provider) &&
                SystemIntegration::PlatformServiceProvider::get_SignInOnPressAnyButton(platform_service_provider)
            ) {
                SystemIntegration::PlatformServiceProvider::SignIn(platform_service_provider);
            }

            TitleScreenPressStartLogic::OnStartPressedCallback(this_ptr);
        }
    }

    IL2CPP_INTERCEPT(bool, GoToSceneController, CheckStartInScene, app::MoonGuid * guid) {
        if (types::GoToSceneController::get_class()->static_fields->Instance == nullptr) {
            return true;
        }

        return MoonGuid::op_Equality(core::api::scenes::get_runtime_scene_metadata("prologueMaster")->fields.SceneMoonGuid, guid);
    }

    auto on_title_screen_loaded = core::api::scenes::single_event_bus().register_handler("wotwTitleScreen", [](core::api::scenes::SceneLoadEventMetadata* meta, auto) {
        if (meta->state != app::SceneState__Enum::Loaded) {
            return;
        }

        const auto keep_loaded_go = il2cpp::unity::find_child(
            il2cpp::unity::get_game_object(meta->scene->fields.SceneRoot),
            std::vector<std::string>{
                "timelines",
                "timelineTitleScreen",
                "keepSceneLoaded(Clone)",
            }
        );

        il2cpp::unity::destroy_object(keep_loaded_go);
    });
    */
} // namespace

#endif
