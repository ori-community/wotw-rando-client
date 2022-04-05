#include <features/scenes/scene_load.h>

#include <Il2CppModLoader/interception_macros.h>

#include <unordered_set>

namespace scenes
{
    std::unordered_map<std::string, std::vector<std::pair<int, loaded_callback>>> to_load;

    namespace {
        IL2CPP_BINDING_OVERLOAD(, ScenesManager, void, PreloadScene, (app::ScenesManager* this_ptr, app::RuntimeSceneMetaData* data), (RuntimeSceneMetaData));
        IL2CPP_BINDING(, ScenesManager, app::RuntimeSceneMetaData*, GetSceneInformation, (app::ScenesManager* this_ptr, app::String* sceneName));
        IL2CPP_BINDING(, ScenesManager, app::SceneManagerScene*, GetSceneManagerScene, (app::ScenesManager* this_ptr, app::String* scene_name));
        IL2CPP_BINDING(, ScenesManager, void, EnableDisabledScene, (app::ScenesManager* this_ptr, app::SceneManagerScene* scene, bool async));
        IL2CPP_BINDING(, ScenesManager, bool, SceneIsLoading, (app::ScenesManager* this_ptr, app::MoonGuid* scene_guid));
        IL2CPP_BINDING(, ScenesManager, bool, SceneIsLoaded, (app::ScenesManager* this_ptr, app::MoonGuid* scene_guid));
        IL2CPP_BINDING_OVERLOAD(, ScenesManager, app::SceneManagerScene*, GetFromCurrentScenes,
            (app::ScenesManager* this_ptr, app::RuntimeSceneMetaData* meta), (:RuntimeSceneMetaData));

        IL2CPP_INTERCEPT(, GameController, void, FixedUpdate, (app::GameController* this_ptr))
        {
            GameController::FixedUpdate(this_ptr);
            const auto scenes = il2cpp::get_class<app::Scenes__Class>("Core", "Scenes");
            auto manager = scenes->static_fields->Manager;
            std::unordered_set<std::string> to_delete;
            for (auto l : to_load)
            {
                auto cname = il2cpp::string_new(l.first);
                auto meta = ScenesManager::GetSceneInformation(manager, cname);
                if (ScenesManager::SceneIsLoaded(manager, meta->fields.SceneMoonGuid))
                {
                    auto scene = ScenesManager::GetFromCurrentScenes(manager, meta);
                    auto go = il2cpp::unity::get_game_object(scene->fields.SceneRoot);
                    for (auto p : l.second)
                        p.second(l.first, p.first, go);

                    to_delete.emplace(l.first);
                }
                else if (!ScenesManager::SceneIsLoading(manager, meta->fields.SceneMoonGuid))
                    ScenesManager::PreloadScene(manager, meta);
            }

            for (auto d : to_delete)
                to_load.erase(d);
        }
    }

    void force_load_area(std::string scene, int id, loaded_callback callback)
    {
        to_load[scene].push_back({ id, callback });
    }
}
