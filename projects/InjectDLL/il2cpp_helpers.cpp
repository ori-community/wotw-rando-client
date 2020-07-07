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

        BINDING(37033312, void, UnityEngine_Object__Destroy, (app::Object* this_ptr));
        BINDING(37030288, app::String*, UnityEngine_Object__get_name, (app::Object* this_ptr));

        BINDING(4521104, app::GameObject*, UnityEngine_Component__get_gameObject, (app::Component* this_ptr));

        BINDING(36928416, app::Transform*, UnityEngine_GameObject__get_transform, (app::GameObject* this_ptr));
        BINDING(2095616, app::Scene, UnityEngine_GameObject__get_scene, (app::GameObject* this_ptr));
        BINDING(36928320, app::Component*, UnityEngine_GameObject__AddComponent, (app::GameObject* this_ptr, app::Type* componentType));
        BINDING(36926304, app::IComponent__Array*, UnityEngine_GameObject__GetComponents, (app::GameObject* this_ptr, app::Type* type));

        BINDING(48221360, int32_t, UnityEngine_Transform__GetChildCount, (app::Transform* this_ptr));
        BINDING(48221264, app::Transform*, UnityEngine_Transform__GetChild, (app::Transform* this_ptr, int32_t index));

        BINDING(40843776, int32_t, UnityEngine_SceneManagement_SceneManager__get_sceneCount, ());
        BINDING(40843936, app::Scene, UnityEngine_SceneManagement_SceneManager__GetActiveScene, ());
        BINDING(40844336, app::Scene, UnityEngine_SceneManagement_SceneManager__GetSceneAt, (int32_t index));
        BINDING(2095616, app::GameObject__Array*, UnityEngine_SceneManagement_Scene__GetRootGameObjects, (app::Scene__Boxed* this_ptr));
        BINDING(2095216, app::String*, UnityEngine_SceneManagement_Scene__get_path, (app::Scene__Boxed* this_ptr));
        BINDING(2095296, app::String*, UnityEngine_SceneManagement_Scene__get_name, (app::Scene__Boxed* this_ptr));

        BINDING(39805024, app::Type*, System_Type__GetType, (app::String* typeName, bool throwOnError));

        // Internal il2cpp methods.
        BINDING(2499936, Il2CppClass*, il2cpp_class_from_name, (Il2CppImage* image, const char* namespaze, const char* name));
        BINDING(2501792, Il2CppDomain*, il2cpp_domain_get, ());
        BINDING(2501856, Il2CppAssembly**, il2cpp_domain_get_assemblies, (Il2CppDomain* domain, size_t* size));
        BINDING(1053216, Il2CppImage*, il2cpp_assembly_get_image, (Il2CppAssembly* assembly));
        BINDING(2504816, Il2CppObject*, il2cpp_object_new, (Il2CppClass* klass));
        BINDING(2500336, MethodInfo*, il2cpp_class_get_method_from_name, (Il2CppClass* klass, const char* name, int argsCount));
        BINDING(2504800, MethodInfo*, il2cpp_object_get_virtual_method, (Il2CppObject* obj, const MethodInfo* method));
        BINDING(2505328, Il2CppObject*, il2cpp_runtime_invoke, (const MethodInfo* method, void* obj, void** params, Il2CppException** exc));
        BINDING(2506016, void*, il2cpp_thread_attach, (Il2CppDomain* domain));
        BINDING(2505552, Il2CppString*, il2cpp_string_new_wrapper, (const char* str));
        BINDING(2505664, Il2CppString*, il2cpp_string_new_len, (const char* str, uint32_t len));
        BINDING(1110304, Il2CppType*, il2cpp_class_get_type, (Il2CppClass* klass));
        BINDING(2507680, char*, il2cpp_type_get_assembly_qualified_name, (const Il2CppType* type));
        BINDING(9312, Il2CppObject*, il2cpp_value_box, (Il2CppClass* klass, void* value));
        BINDING(1053568, bool, il2cpp_class_is_assignable_from, (Il2CppClass* klass, Il2CppClass* oklass));
        BINDING(2499904, bool, il2cpp_class_is_subclass_of, (Il2CppClass* klass, Il2CppClass* klassc, bool check_interfaces));
        BINDING(2326800, bool, il2cpp_class_has_parent, (Il2CppClass* klass, Il2CppClass* klassc));
        BINDING(2499584, void, il2cpp_free, (void* obj));

        thread_local std::string buffer;
        std::string const& get_full_name(const char* namespaze, const char* name)
        {
            buffer.clear();
            buffer.reserve(32);
            if (namespaze == nullptr || namespaze[0] == '\0')
            {
                buffer += name;
                return buffer;
            }
            else
            {
                buffer += namespaze;
                buffer += ".";
                buffer += name;
                return buffer;
            }
        }

        char* get_qualified(const char* namespaze, const char* name)
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
            auto transform = UnityEngine_GameObject__get_transform(game_object);
            auto count = UnityEngine_Transform__GetChildCount(transform);
            for (auto i = 0; i < count; ++i)
                children.push_back(UnityEngine_Component__get_gameObject(
                    reinterpret_cast<app::Component*>(UnityEngine_Transform__GetChild(transform, i))));

            return children;
        }

        std::vector<app::Component*> get_components(app::GameObject* game_object, const char* namespaze, const char* name)
        {
            std::vector<app::Component*> components;
            auto qualified = get_qualified(namespaze, name);
            auto type_str = reinterpret_cast<app::String*>(il2cpp::string_new(qualified));
            auto runtime_type = System_Type__GetType(type_str, false);
            auto c_array = UnityEngine_GameObject__GetComponents(game_object, runtime_type);
            for (auto i = 0; i < c_array->max_length; ++i)
                components.push_back(reinterpret_cast<app::Component*>(c_array->vector[i]));

            return components;
        }

        void destroy_object(void* object)
        {
            UnityEngine_Object__Destroy(reinterpret_cast<app::Object*>(object));
        }

        app::GameObject* get_game_object(void* component)
        {
            return UnityEngine_Component__get_gameObject(reinterpret_cast<app::Component*>(component));
        }

        app::Component* add_component_untyped(app::GameObject* game_object, const char* namespaze, const char* name)
        {
            auto qualified = get_qualified(namespaze, name);
            auto type_str = reinterpret_cast<app::String*>(il2cpp::string_new(qualified));
            auto runtime_type = System_Type__GetType(type_str, false);
            return UnityEngine_GameObject__AddComponent(game_object, runtime_type);

        }

        std::string get_object_name(void* object)
        {
            auto cast_object = static_cast<app::Object*>(object);
            auto csstr = UnityEngine_Object__get_name(cast_object);
            return convert_csstring(csstr);
        }

        int32_t get_scene_count()
        {
            return UnityEngine_SceneManagement_SceneManager__get_sceneCount();
        }

        app::Scene get_scene_at(int32_t i)
        {
            return UnityEngine_SceneManagement_SceneManager__GetSceneAt(i);
        }

        app::Scene get_active_scene()
        {
            return UnityEngine_SceneManagement_SceneManager__GetActiveScene();
        }

        app::Scene get_scene(app::GameObject* game_object)
        {
            return UnityEngine_GameObject__get_scene(game_object);
        }

        std::vector<app::GameObject*> get_root_game_objects(app::Scene& scene)
        {
            std::vector<app::GameObject*> output;
            auto boxed = box_value<app::Scene__Boxed>(get_class("UnityEngine.SceneManagement", "Scene"), scene);
            auto game_objects = UnityEngine_SceneManagement_Scene__GetRootGameObjects(boxed);
            for (auto i = 0; i < game_objects->max_length; ++i)
                output.push_back(game_objects->vector[i]);

            return output;
        }

        std::string get_scene_name(app::Scene& scene)
        {
            auto boxed = box_value<app::Scene__Boxed>(get_class("UnityEngine.SceneManagement", "Scene"), scene);
            auto csstring = UnityEngine_SceneManagement_Scene__get_name(boxed);
            return convert_csstring(csstring);
        }

        std::string get_scene_path(app::Scene& scene)
        {
            auto boxed = box_value<app::Scene__Boxed>(get_class("UnityEngine.SceneManagement", "Scene"), scene);
            auto csstring = UnityEngine_SceneManagement_Scene__get_path(boxed);
            return convert_csstring(csstring);
        }
    }

    namespace untyped
    {
        Il2CppObject* create_object(const char* namezpace, const char* name)
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

        bool is_assignable(Il2CppClass* klass, const char* namezpace, const char* name)
        {
            return is_assignable(klass, get_class(namezpace, name));
        }

        bool is_assignable(Il2CppClass* klass, Il2CppClass* iklass)
        {
            return il2cpp_class_is_assignable_from(iklass, klass);
        }

        //Il2CppObject* box_value(Il2CppClass* klass, void* value)
        //{
        //    return il2cpp_value_box(klass, value);
        //}

        Il2CppClass* get_class(const char* namezpace, const char* name)
        {
            std::string const& full_name = get_full_name(namezpace, name);
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
                klass = il2cpp_class_from_name(image, namezpace, name);
                ++i;
            }

            if (klass == nullptr)
                trace(MessageType::Error, 1, "il2cpp", format("Failed to find klass %s", full_name.c_str()));
            
            // Add it to resolved classes anyway to prevent trace spam and future lookups.
            resolved_classes[full_name] = klass;

            return klass;
        }
    }

    void free_obj(void* obj)
    {
        il2cpp_free(obj);
    }

    Il2CppString* string_new(const char* str)
    {
        return il2cpp_string_new_wrapper(str);
    }

    Il2CppString* string_new(const char* str, uint32_t len)
    {
        return il2cpp_string_new_len(str, len);
    }

    Il2CppObject* invoke_v(void* obj, const char* method, std::vector<void*> params)
    {
        auto cast_obj = reinterpret_cast<Il2CppObject*>(obj);
        Il2CppException* exc = nullptr;
        auto method_info = il2cpp_class_get_method_from_name(cast_obj->klass, method, params.size());
        if (method_info == nullptr)
        {
            trace(MessageType::Error, 1, "il2cpp", format("failed to find method '%s'", method));
            return nullptr;
        }

        void** start = params.data();
        return il2cpp_runtime_invoke(method_info, cast_obj, start, &exc);
    }

    Il2CppObject* invoke_virtual_v(void* obj, Il2CppClass* base, const char* method, std::vector<void*> params)
    {
        auto cast_obj = reinterpret_cast<Il2CppObject*>(obj);
        Il2CppException* exc = nullptr;
        auto method_info = il2cpp_class_get_method_from_name(base, method, params.size());
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

    bool is_assignable(void* obj, const char* namezpace, const char* name)
    {
        return untyped::is_assignable(reinterpret_cast<Il2CppObject*>(obj)->klass, namezpace, name);
    }

    MethodInfo* resolve_generic_method(uint64_t address)
    {
        return *reinterpret_cast<MethodInfo**>(resolve_rva(address));
    }
}