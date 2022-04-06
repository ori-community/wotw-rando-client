#include <features/scenes/scene_load.h>
#include <randomizer/ipc/ipc.h>

#include <Common/ext.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

namespace ipc
{
    namespace
    {
        std::string_view get_klass_name(void* klass)
        {
            auto cast = reinterpret_cast<Il2CppClass*>(klass);
            if (std::string_view(cast->namespaze).empty())
                return cast->name;
            else
                return format("%s.%s", cast->namespaze, cast->name);
        }

        using visualizer = void(*)(nlohmann::json& j, void* obj, bool verbose);
        extern nlohmann::json visualize(void* obj, std::string name, bool verbose);

        IL2CPP_BINDING(UnityEngine, Transform, app::Vector3, get_position, (app::Transform* this_ptr));
        IL2CPP_BINDING(UnityEngine, Transform, app::Quaternion, get_rotation, (app::Transform* this_ptr));
        IL2CPP_BINDING(UnityEngine, Transform, app::Vector3, get_localPosition, (app::Transform* this_ptr));
        IL2CPP_BINDING(UnityEngine, Transform, app::Quaternion, get_localRotation, (app::Transform* this_ptr));
        IL2CPP_BINDING(UnityEngine, Transform, app::Vector3, get_localScale, (app::Transform* this_ptr));
        IL2CPP_BINDING(UnityEngine, Quaternion, app::Vector3, get_eulerAngles, (app::Quaternion__Boxed* this_ptr));
        void visualize_transform(nlohmann::json& j, void* obj, bool verbose)
        {
            auto transform = reinterpret_cast<app::Transform*>(obj);
            if (verbose)
            {
                auto postion = Transform::get_position(transform);
                auto quat = Transform::get_rotation(transform);
                auto boxed = il2cpp::box_value<app::Quaternion__Boxed>(il2cpp::get_class("UnityEngine", "Quaternion"), quat);
                auto rotation = Quaternion::get_eulerAngles(boxed);
                auto local_position = Transform::get_localPosition(transform);
                quat = Transform::get_localRotation(transform);
                boxed = il2cpp::box_value<app::Quaternion__Boxed>(il2cpp::get_class("UnityEngine", "Quaternion"), quat);
                auto local_rotation = Quaternion::get_eulerAngles(boxed);
                auto local_scale = Transform::get_localScale(transform);

                j["value"] = {
                    "world_position", {
                        { "x", postion.x },
                        { "y", postion.y },
                        { "z", postion.z },
                    },
                    "world_rotation", {
                        { "x", rotation.x },
                        { "y", rotation.y },
                        { "z", rotation.z },
                    },
                    "local_position", {
                        { "x", local_position.x },
                        { "y", local_position.y },
                        { "z", local_position.z },
                    },
                    "local_rotation", {
                        { "x", local_rotation.x },
                        { "y", local_rotation.y },
                        { "z", local_rotation.z },
                    },
                    "local_scale", {
                        { "x", local_scale.x },
                        { "y", local_scale.y },
                        { "z", local_scale.z },
                    },
                };
            }
            else
            {
                auto postion = Transform::get_position(transform);
                j["value"] = {
                    "world_position", {
                        { "x", postion.x },
                        { "y", postion.y },
                        { "z", postion.z },
                    }
                };
            }
        }

        IL2CPP_BINDING(UnityEngine, GameObject, int, GetInstanceID, (app::GameObject* this_ptr));
        void visualize_game_object(nlohmann::json& j, void* obj, bool verbose)
        {
            auto go = reinterpret_cast<app::GameObject*>(obj);
            auto id = GameObject::GetInstanceID(go);
            auto layer = il2cpp::invoke<app::Int32__Boxed>(go, "get_layer")->fields;
            j["instance_id"] = id;
            j["path"] = il2cpp::unity::get_path(go);
            if (verbose)
            {
                nlohmann::json arr;
                auto components = il2cpp::unity::get_components(go);
                for (auto component : components)
                    arr.push_back(visualize(component, "", verbose));

                j["value"].array({
                    {
                        { "name", "layer" },
                        { "type", "scalar" },
                        { "value", layer }
                    },
                    {
                        { "name", "components" },
                        { "type", "array" },
                        { "value", arr }
                    }
                });
            }
            else
            {
                auto transform = il2cpp::unity::get_transform(go);
                j["value"].array({
                    visualize(transform, "transform", false),
                    {
                        { "name", "layer" },
                        { "type", "scalar" },
                        { "value", layer }
                    }
                });
                auto children = il2cpp::unity::get_children(go);
                j["children_count"] = children.size();
            }
        }

        std::unordered_map<std::string, visualizer> visualizers{
            //{ "NewSetupStateController", visualize_new_setup_state_controller },
            //{ "SetupStateModifier", visualize_setup_state_modifier },
            //{ "StateCondition", visualize_state_condition },
            //
            //{ "UberStateBoolCondition", visualize_uber_state_bool_condition },
            //{ "UberStateValueCondition", visualize_uber_state_value_condition },
            //
            //{ "DesiredUberStateComposite", visualize_desired_uber_state_composite },
            //{ "DesiredUberStateBool", visualize_desired_bool_uber_state },
            //{ "DesiredUberStateFloat", visualize_desired_float_uber_state },
            //{ "DesiredUberStateByte", visualize_desired_byte_uber_state },
            //{ "DesiredUberStateInt", visualize_desired_int_uber_state },
            //
            //{ "Moon.SerializedBooleanUberState", visualize_serialized_uber_state },
            //{ "Moon.SerializedFloatUberState", visualize_serialized_uber_state },
            //{ "Moon.SerializedByteUberState", visualize_serialized_uber_state },
            //{ "Moon.SerializedIntUberState", visualize_serialized_uber_state },
            //
            //{ "SceneRoot", visualize_scene_root },
            { "UnityEngine.GameObject", visualize_game_object },
            { "UnityEngine.Transform", visualize_transform },
            //{ "UnityEngine.Mesh", visualize_unity_mesh },
            //{ "UnityEngine.MeshFilter", visualize_unity_mesh_filter },
            //{ "UnityEngine.Renderer", visualize_unity_renderer },
            //
            //{ "Respawner", visualize_respawner },
        };

        nlohmann::json visualize(void* obj, std::string name, bool verbose)
        {
            nlohmann::json j;
            if (!name.empty())
                j["name"] = name;

            if (!il2cpp::unity::is_valid(obj))
            {
                j["type"] = "scalar";
                j["value"] = "nullptr";
                return j;
            }

            auto cast = reinterpret_cast<Il2CppObject*>(obj);
            auto klass = cast->klass;
            while (klass != nullptr)
            {
                std::string full_name = std::string(get_klass_name(klass));
                auto it = visualizers.find(full_name);
                if (it != visualizers.end())
                {
                    j["type"] = get_klass_name(klass);
                    it->second(j, obj, verbose);
                    return j;
                }

                klass = klass->parent;
            }

            j["type"] = "scalar";
            j["value"] = get_klass_name(klass);
            return j;
        }

        void report_roots(nlohmann::json& j, bool children)
        {
            auto game_objects = scenes::get_roots_from_active();
            if (children)
            {
                auto payload = nlohmann::json::array();
                for (auto game_object : game_objects)
                    payload.push_back(visualize(game_object, il2cpp::unity::get_object_name(game_object), false));

                j["payload"] = payload;
            }
            else
            {
                j["payload"] = {
                    { "path", "" },
                    { "children_count", game_objects.size() },
                };
            }
        }

        void report_game_object(nlohmann::json& j, std::string path, bool children)
        {
            auto game_object = scenes::get_game_object(path);
            if (children)
            {
                auto children = il2cpp::unity::get_children(game_object);
                auto payload = nlohmann::json::array();
                for (auto child : children)
                    payload.push_back(visualize(child, il2cpp::unity::get_object_name(child), false));

                j["payload"] = payload;
            }
            else
                j["payload"] = visualize(game_object, il2cpp::unity::get_object_name(game_object), true);
        }

        void get_game_object(nlohmann::json& j)
        {
            std::vector<float> values;
            auto id = j.at("id").get<int>();
            nlohmann::json response;
            response["type"] = "response";
            response["id"] = id;
            response["method"] = "get_game_object";
            auto path = j.at("payload").value("path", "");
            if (path == "")
                report_roots(response, false);
            else
                report_game_object(response, path, false);

            ipc::send_message(response.dump());
        }

        void get_children(nlohmann::json& j)
        {
            std::vector<float> values;
            auto id = j.at("id").get<int>();
            nlohmann::json response;
            response["type"] = "response";
            response["id"] = id;
            response["method"] = "get_children";
            auto path = j.at("payload").value("path", "");
            if (path == "")
                report_roots(response, true);
            else
                report_game_object(response, path, true);

            ipc::send_message(response.dump());
        }

        void initialize()
        {
            register_request_handler("get_game_object", get_game_object);
            register_request_handler("get_children", get_children);
        }

        CALL_ON_INIT(initialize);
    }
}
