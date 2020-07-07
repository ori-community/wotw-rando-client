#include <il2cpp_helpers.h>
#include <common.h>
#include <interception_macros.h>
#include <dev/dev_commands.h>

#include <Common/ext.h>

#include <vector>

namespace il2cpp
{
    namespace
    {
        std::unordered_map<std::string, Il2CppClass*> resolved_classes;

        STATIC_IL2CPP_BINDING(UnityEngine, Object, void, Destroy, (app::Object* this_ptr));
        IL2CPP_BINDING(UnityEngine, Object, app::String*, get_name, (app::Object* this_ptr));

        IL2CPP_BINDING(UnityEngine, Component, app::GameObject*, get_gameObject, (app::Component* this_ptr));

        IL2CPP_BINDING(UnityEngine, GameObject, app::Transform*, get_transform, (app::GameObject* this_ptr));
        IL2CPP_BINDING(UnityEngine, GameObject, app::Scene, get_scene, (app::GameObject* this_ptr));
        IL2CPP_BINDING(UnityEngine, GameObject, app::Component*, AddComponent, (app::GameObject* this_ptr, app::Type* type));
        IL2CPP_BINDING(UnityEngine, GameObject, app::IComponent__Array*, GetComponents, (app::GameObject* this_ptr, app::Type* type));

        IL2CPP_BINDING(UnityEngine, Transform, int32_t, GetChildCount, (app::Transform* this_ptr));
        IL2CPP_BINDING(UnityEngine, Transform, app::Transform*, GetChild, (app::Transform* this_ptr, int32_t index));

        STATIC_IL2CPP_BINDING(UnityEngine.SceneManagement, SceneManager, int32_t, get_sceneCount, ());
        STATIC_IL2CPP_BINDING(UnityEngine.SceneManagement, SceneManager, app::Scene, GetActiveScene, ());
        STATIC_IL2CPP_BINDING(UnityEngine.SceneManagement, SceneManager, app::Scene, GetSceneAt, (int32_t index));

        IL2CPP_BINDING(UnityEngine.SceneManagement, Scene, app::GameObject__Array*, GetRootGameObjects, (app::Scene__Boxed* this_ptr));
        IL2CPP_BINDING(UnityEngine.SceneManagement, Scene, app::String*, get_path, (app::Scene__Boxed* this_ptr));
        IL2CPP_BINDING(UnityEngine.SceneManagement, Scene, app::String*, get_name, (app::Scene__Boxed* this_ptr));

        IL2CPP_BINDING(System, Type, app::Type*, GetType, (app::String* type_name, bool throw_on_error));

        // Internal il2cpp methods.
        INTERNAL_BINDING(0x262560, Il2CppClass*, il2cpp_class_from_name, (Il2CppImage* image, const char* namespaze, const char* name));
        INTERNAL_BINDING(0x262CA0, Il2CppDomain*, il2cpp_domain_get, ());
        INTERNAL_BINDING(0x262CE0, Il2CppAssembly**, il2cpp_domain_get_assemblies, (Il2CppDomain* domain, size_t* size));
        INTERNAL_BINDING(0x101220, Il2CppImage*, il2cpp_assembly_get_image, (Il2CppAssembly* assembly));
        INTERNAL_BINDING(0x263870, Il2CppObject*, il2cpp_object_new, (Il2CppClass* klass));
        INTERNAL_BINDING(0x2626F0, MethodInfo*, il2cpp_class_get_method_from_name, (Il2CppClass* klass, const char* name, int argsCount));
        INTERNAL_BINDING(0x263860, MethodInfo*, il2cpp_object_get_virtual_method, (Il2CppObject* obj, const MethodInfo* method));
        INTERNAL_BINDING(0x263A70, Il2CppObject*, il2cpp_runtime_invoke, (const MethodInfo* method, void* obj, void** params, Il2CppException** exc));
        INTERNAL_BINDING(0x263D20, void*, il2cpp_thread_attach, (Il2CppDomain* domain));
        INTERNAL_BINDING(0x263B50, Il2CppString*, il2cpp_string_new_wrapper, (const char* str));
        INTERNAL_BINDING(0x263BC0, Il2CppString*, il2cpp_string_new_len, (const char* str, uint32_t len));
        INTERNAL_BINDING(0x10F120, Il2CppType*, il2cpp_class_get_type, (Il2CppClass* klass));
        INTERNAL_BINDING(0x2643A0, char*, il2cpp_type_get_assembly_qualified_name, (const Il2CppType* type));
        INTERNAL_BINDING(0x002460, Il2CppObject*, il2cpp_value_box, (Il2CppClass* klass, void* value));
        INTERNAL_BINDING(0x101380, bool, il2cpp_class_is_assignable_from, (Il2CppClass* klass, Il2CppClass* oklass));
        INTERNAL_BINDING(0x262540, bool, il2cpp_class_is_subclass_of, (Il2CppClass* klass, Il2CppClass* klassc, bool check_interfaces));
        INTERNAL_BINDING(0x238110, bool, il2cpp_class_has_parent, (Il2CppClass* klass, Il2CppClass* klassc));
        INTERNAL_BINDING(0x262400, void, il2cpp_free, (void* obj));
        INTERNAL_BINDING(0x262590, Il2CppClass*, il2cpp_class_get_nested_types, (Il2CppClass* klass, void** iter));

        thread_local std::string buffer;
        std::string const& get_full_name(std::string_view namespaze, std::string_view name, std::string_view nested = "")
        {
            buffer.clear();
            buffer.reserve(32);
            if (!namespaze.empty())
            {
                buffer += namespaze;
                buffer += ".";
            }

            buffer += name;

            if (!nested.empty())
            {
                buffer += ".";
                buffer += nested;
            }

            return buffer;
        }

        char* get_qualified(std::string_view namespaze, std::string_view name)
        {
            auto klass = get_class<>(namespaze, name);
            auto type = il2cpp_class_get_type(klass);
            return il2cpp_type_get_assembly_qualified_name(type);
        }
    }

    namespace unity
    {
        std::vector<app::GameObject*> get_children(app::GameObject* game_object)
        {
            std::vector<app::GameObject*> children;
            auto transform = GameObject_get_transform(game_object);
            auto count = Transform_GetChildCount(transform);
            for (auto i = 0; i < count; ++i)
                children.push_back(Component_get_gameObject(
                    reinterpret_cast<app::Component*>(Transform_GetChild(transform, i))));

            return children;
        }

        std::vector<app::Component*> get_components(app::GameObject* game_object, std::string_view namespaze, std::string_view name)
        {
            std::vector<app::Component*> components;
            auto qualified = get_qualified(namespaze, name);
            auto type_str = reinterpret_cast<app::String*>(il2cpp::string_new(qualified));
            auto runtime_type = Type_GetType(type_str, false);
            auto c_array = GameObject_GetComponents(game_object, runtime_type);
            for (auto i = 0; i < c_array->max_length; ++i)
                components.push_back(reinterpret_cast<app::Component*>(c_array->vector[i]));

            return components;
        }

        void destroy_object(void* object)
        {
            Object_Destroy(reinterpret_cast<app::Object*>(object));
        }

        app::GameObject* get_game_object(void* component)
        {
            return Component_get_gameObject(reinterpret_cast<app::Component*>(component));
        }

        app::Component* add_component_untyped(app::GameObject* game_object, std::string_view namespaze, std::string_view name)
        {
            auto qualified = get_qualified(namespaze, name);
            auto type_str = reinterpret_cast<app::String*>(il2cpp::string_new(qualified));
            auto runtime_type = Type_GetType(type_str, false);
            return GameObject_AddComponent(game_object, runtime_type);

        }

        std::string get_object_name(void* object)
        {
            auto cast_object = static_cast<app::Object*>(object);
            auto csstr = Object_get_name(cast_object);
            return convert_csstring(csstr);
        }

        int32_t get_scene_count()
        {
            return SceneManager_get_sceneCount();
        }

        app::Scene get_scene_at(int32_t i)
        {
            return SceneManager_GetSceneAt(i);
        }

        app::Scene get_active_scene()
        {
            return SceneManager_GetActiveScene();
        }

        app::Scene get_scene(app::GameObject* game_object)
        {
            return GameObject_get_scene(game_object);
        }

        std::vector<app::GameObject*> get_root_game_objects(app::Scene& scene)
        {
            std::vector<app::GameObject*> output;
            auto boxed = box_value<app::Scene__Boxed>(get_class("UnityEngine.SceneManagement", "Scene"), scene);
            auto game_objects = Scene_GetRootGameObjects(boxed);
            for (auto i = 0; i < game_objects->max_length; ++i)
                output.push_back(game_objects->vector[i]);

            return output;
        }

        std::string get_scene_name(app::Scene& scene)
        {
            auto boxed = box_value<app::Scene__Boxed>(get_class("UnityEngine.SceneManagement", "Scene"), scene);
            auto csstring = Scene_get_name(boxed);
            return convert_csstring(csstring);
        }

        std::string get_scene_path(app::Scene& scene)
        {
            auto boxed = box_value<app::Scene__Boxed>(get_class("UnityEngine.SceneManagement", "Scene"), scene);
            auto csstring = Scene_get_path(boxed);
            return convert_csstring(csstring);
        }
    }

    namespace untyped
    {
        MethodInfo* get_method_from_name(Il2CppClass* klass, std::string_view name, int arg_count)
        {
            return il2cpp_class_get_method_from_name(klass, name.data(), arg_count);
        }

        Il2CppObject* create_object(std::string_view namezpace, std::string_view name)
        {
            auto klass = get_class(namezpace, name);
            if (klass == nullptr)
                return nullptr;

            return create_object(klass);
        }

        Il2CppObject* create_object(Il2CppClass* klass)
        {
            return il2cpp_object_new(klass);
        }

        bool is_assignable(Il2CppClass* klass, std::string_view namezpace, std::string_view name)
        {
            return is_assignable(klass, get_class(namezpace, name));
        }

        bool is_assignable(Il2CppClass* klass, Il2CppClass* iklass)
        {
            return il2cpp_class_is_assignable_from(iklass, klass);
        }

        Il2CppObject* box_value(Il2CppClass* klass, void* value)
        {
            return il2cpp_value_box(klass, value);
        }

        Il2CppClass* get_class(std::string_view namezpace, std::string_view name)
        {
            auto const& full_name = get_full_name(namezpace, name);
            auto it = resolved_classes.find(full_name);
            if (it != resolved_classes.end())
                return it->second;

            Il2CppClass* klass = nullptr;
            size_t i = 0;
            size_t size = 0;
            auto domain = il2cpp_domain_get();
            auto assemblies = il2cpp_domain_get_assemblies(domain, &size);
            while (klass == nullptr && i < size)
            {
                auto image = il2cpp_assembly_get_image(assemblies[i]);
                klass = il2cpp_class_from_name(image, namezpace.data(), name.data());
                ++i;
            }

            if (klass == nullptr)
                trace(MessageType::Error, 1, "il2cpp", format("Failed to find klass %s", full_name.c_str()));
            
            // Add it to resolved classes anyway to prevent trace spam and future lookups.
            resolved_classes[full_name] = klass;

            return klass;
        }

        Il2CppClass* get_nested_class(std::string_view namezpace, std::string_view name, std::string_view nested)
        {
            {
                auto const& full_name = get_full_name(namezpace, name, nested);
                auto it = resolved_classes.find(full_name);
                if (it != resolved_classes.end())
                    return it->second;
            }

            Il2CppClass* output = nullptr;
            auto klass = get_class(namezpace, name);
            if (klass != nullptr)
            {
                void* iter = nullptr;
                il2cpp_class_get_nested_types(klass, &iter);
                auto typed_iter = reinterpret_cast<Il2CppClass**>(iter);
                for (auto i = 0; i < klass->nested_type_count && output == nullptr; ++i)
                {
                    if (typed_iter[i]->name == nested)
                        output = typed_iter[i];
                }
            }

            auto const& full_name = get_full_name(namezpace, name, nested);
            resolved_classes[full_name] = output;
            if (output == nullptr)
                trace(MessageType::Error, 1, "il2cpp", format("Failed to find klass %s", full_name.c_str()));

            return output;
        }
    }

    void free_obj(void* obj)
    {
        il2cpp_free(obj);
    }

    Il2CppString* string_new(std::string_view str)
    {
        return il2cpp_string_new_wrapper(str.data());
    }

    Il2CppString* string_new(std::string_view str, uint32_t len)
    {
        return il2cpp_string_new_len(str.data(), len);
    }

    Il2CppObject* invoke_v(void* obj, std::string_view method, std::vector<void*> params)
    {
        auto cast_obj = reinterpret_cast<Il2CppObject*>(obj);
        Il2CppException* exc = nullptr;
        auto method_info = il2cpp_class_get_method_from_name(cast_obj->klass, method.data(), params.size());
        if (method_info == nullptr)
        {
            trace(MessageType::Error, 1, "il2cpp", format("failed to find method '%s'", method));
            return nullptr;
        }

        void** start = params.data();
        return il2cpp_runtime_invoke(method_info, cast_obj, start, &exc);
    }

    Il2CppObject* invoke_virtual_v(void* obj, Il2CppClass* base, std::string_view method, std::vector<void*> params)
    {
        auto cast_obj = reinterpret_cast<Il2CppObject*>(obj);
        Il2CppException* exc = nullptr;
        auto method_info = il2cpp_class_get_method_from_name(base, method.data(), params.size());
        if (method_info == nullptr)
        {
            trace(MessageType::Error, 1, "il2cpp", format("failed to find method '%s'", method));
            return nullptr;
        }

        auto virtual_method_info = il2cpp_object_get_virtual_method(cast_obj, method_info);
        if (virtual_method_info == nullptr)
        {
            trace(MessageType::Error, 1, "il2cpp", format("failed to find virtual method '%s'", method));
            return nullptr;
        }

        void** start = params.data();
        return il2cpp_runtime_invoke(virtual_method_info, cast_obj, start, &exc);
    }

    bool is_assignable(void* obj, std::string_view namezpace, std::string_view name)
    {
        return untyped::is_assignable(reinterpret_cast<Il2CppObject*>(obj)->klass, namezpace, name);
    }

    MethodInfo* resolve_generic_method(uint64_t address)
    {
        return *reinterpret_cast<MethodInfo**>(resolve_rva(address));
    }
}