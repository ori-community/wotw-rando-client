#include <il2cpp_helpers.h>
#include <common.h>
#include <interception_macros.h>
#include <console.h>

#include <Common/ext.h>

#include <vector>
#include <locale>
#include <codecvt>
#include <xstring>

namespace il2cpp
{
    namespace
    {
        struct KlassOverloadInfo
        {
            std::string name;
            int param_count;
            std::vector<MethodInfo const*> methods;
        };

        std::unordered_map<std::string, Il2CppClass*> resolved_classes;
        std::unordered_map<Il2CppClass*, std::vector<KlassOverloadInfo>> resolved_klass_overloads;

        STATIC_IL2CPP_BINDING(UnityEngine, ScriptableObject, app::ScriptableObject*, CreateInstance, (app::Type* type));

        STATIC_IL2CPP_BINDING(UnityEngine, Object, void, Destroy, (app::Object* this_ptr));
        IL2CPP_BINDING(UnityEngine, Object, app::String*, get_name, (app::Object* this_ptr));

        IL2CPP_BINDING(UnityEngine, Component, app::GameObject*, get_gameObject, (app::Component* this_ptr));
        
        IL2CPP_BINDING(UnityEngine, Transform, app::Transform*, get_parent, (app::Transform* this_ptr));
        IL2CPP_BINDING(UnityEngine, GameObject, app::Transform*, get_transform, (app::GameObject* this_ptr));
        IL2CPP_BINDING(UnityEngine, GameObject, app::Scene, get_scene, (app::GameObject* this_ptr));
        IL2CPP_BINDING(UnityEngine, GameObject, app::Component*, AddComponent, (app::GameObject* this_ptr, app::Type* type));
        IL2CPP_BINDING_OVERLOAD(UnityEngine, GameObject, app::IComponent__Array*, GetComponents, (app::GameObject* this_ptr, app::Type* type), (System:Type));

        IL2CPP_BINDING(UnityEngine, Transform, int32_t, GetChildCount, (app::Transform* this_ptr));
        IL2CPP_BINDING(UnityEngine, Transform, app::Transform*, GetChild, (app::Transform* this_ptr, int32_t index));

        STATIC_IL2CPP_BINDING(UnityEngine.SceneManagement, SceneManager, int32_t, get_sceneCount, ());
        STATIC_IL2CPP_BINDING(UnityEngine.SceneManagement, SceneManager, app::Scene, GetActiveScene, ());
        STATIC_IL2CPP_BINDING(UnityEngine.SceneManagement, SceneManager, app::Scene, GetSceneAt, (int32_t index));

        IL2CPP_BINDING(UnityEngine.SceneManagement, Scene, app::GameObject__Array*, GetRootGameObjects, (app::Scene__Boxed* this_ptr));
        IL2CPP_BINDING(UnityEngine.SceneManagement, Scene, app::String*, get_path, (app::Scene__Boxed* this_ptr));
        IL2CPP_BINDING(UnityEngine.SceneManagement, Scene, app::String*, get_name, (app::Scene__Boxed* this_ptr));

        IL2CPP_BINDING(System, Type, app::Type*, GetType, (app::String* type_name, bool throw_on_error));
        IL2CPP_BINDING(System, String, app::Char__Array*, ToCharArray, (app::String* this_ptr));

        // Internal il2cpp methods.
        INTERNAL_BINDING(0x262560, Il2CppClass*, il2cpp_class_from_name, (Il2CppImage* image, const char* namezpace, const char* name));
        INTERNAL_BINDING(0x262CA0, Il2CppDomain*, il2cpp_domain_get, ());
        INTERNAL_BINDING(0x262CE0, Il2CppAssembly**, il2cpp_domain_get_assemblies, (Il2CppDomain* domain, size_t* size));
        INTERNAL_BINDING(0x101220, Il2CppImage*, il2cpp_assembly_get_image, (Il2CppAssembly* assembly));
        INTERNAL_BINDING(0x263870, Il2CppObject*, il2cpp_object_new, (Il2CppClass* klass));
        INTERNAL_BINDING(0x2625B0, PropertyInfo*, il2cpp_class_get_properties, (Il2CppClass* klass, void** iter));
        INTERNAL_BINDING(0x2626E0, MethodInfo*, il2cpp_class_get_methods, (Il2CppClass* klass, void** iter));
        // We use get_methods instead and build a lookup cache.
        //INTERNAL_BINDING(0x2626F0, MethodInfo*, il2cpp_class_get_method_from_name, (Il2CppClass* klass, const char* name, int argsCount));
        INTERNAL_BINDING(0x263860, MethodInfo*, il2cpp_object_get_virtual_method, (Il2CppObject* obj, const MethodInfo* method));
        INTERNAL_BINDING(0x263A70, Il2CppObject*, il2cpp_runtime_invoke, (const MethodInfo* method, void* obj, void** params, Il2CppException** exc));
        INTERNAL_BINDING(0x263D20, void*, il2cpp_thread_attach, (Il2CppDomain* domain));
        INTERNAL_BINDING(0x263B50, Il2CppString*, il2cpp_string_new_wrapper, (const char* str));
        INTERNAL_BINDING(0x263BC0, Il2CppString*, il2cpp_string_new_len, (const char* str, uint32_t len));
        INTERNAL_BINDING(0x263B70, Il2CppString*, il2cpp_string_new_utf16, (const Il2CppChar* str, uint32_t len));
        INTERNAL_BINDING(0x10F120, Il2CppType*, il2cpp_class_get_type, (Il2CppClass* klass));
        INTERNAL_BINDING(0x2643A0, char*, il2cpp_type_get_assembly_qualified_name, (const Il2CppType* type));
        INTERNAL_BINDING(0x002460, Il2CppObject*, il2cpp_value_box, (Il2CppClass* klass, void* value));
        INTERNAL_BINDING(0x101380, bool, il2cpp_class_is_assignable_from, (Il2CppClass* klass, Il2CppClass* oklass));
        INTERNAL_BINDING(0x262540, bool, il2cpp_class_is_subclass_of, (Il2CppClass* klass, Il2CppClass* klassc, bool check_interfaces));
        INTERNAL_BINDING(0x238110, bool, il2cpp_class_has_parent, (Il2CppClass* klass, Il2CppClass* klassc));
        INTERNAL_BINDING(0x262400, void, il2cpp_free, (void* obj));
        INTERNAL_BINDING(0x262590, Il2CppClass*, il2cpp_class_get_nested_types, (Il2CppClass* klass, void** iter));
        INTERNAL_BINDING(0x262810, bool, il2cpp_class_is_enum, (Il2CppClass* klass));
        INTERNAL_BINDING(0x262550, Il2CppClass*, il2cpp_class_from_type, (Il2CppType const* type));
        INTERNAL_BINDING(0x263100, uint32_t, il2cpp_gchandle_new, (Il2CppObject* obj, bool pinned));
        INTERNAL_BINDING(0x263120, uint32_t, il2cpp_gchandle_new_weakref, (Il2CppObject* obj, bool track_resurrection));
        INTERNAL_BINDING(0x263160, void, il2cpp_gchandle_free, (uint32_t handle));
        INTERNAL_BINDING(0x263140, Il2CppObject*, il2cpp_gchandle_get_target, (uint32_t handle));
        INTERNAL_BINDING(0x262470, Il2CppArray*, il2cpp_array_new, (Il2CppClass* element, il2cpp_array_size_t length));
        INTERNAL_BINDING(0x2624A0, Il2CppArray*, il2cpp_array_new_specific, (Il2CppClass* array_klass , il2cpp_array_size_t length));
        INTERNAL_BINDING(0x2624B0, Il2CppArray*, il2cpp_array_new_full, (Il2CppClass* array_klass, il2cpp_array_size_t* lengths, il2cpp_array_size_t* lower_bounds));

        thread_local std::string buffer;
        std::string const& get_full_name(std::string_view namezpace, std::string_view name, std::string_view nested = "")
        {
            buffer.clear();
            buffer.reserve(32);
            if (!namezpace.empty())
            {
                buffer += namezpace;
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

        char* get_qualified(std::string_view namezpace, std::string_view name)
        {
            auto klass = get_class<>(namezpace, name);
            auto type = il2cpp_class_get_type(klass);
            return il2cpp_type_get_assembly_qualified_name(type);
        }

        void resolve_overloads(Il2CppClass* klass)
        {
            std::vector<KlassOverloadInfo> overloads;
            void* it = nullptr;
            for (auto i = 0; i < klass->method_count; ++i)
            {
                auto method = il2cpp_class_get_methods(klass, &it);
                auto method_overload_info = std::find_if(overloads.begin(), overloads.end(), [method](KlassOverloadInfo const& info) -> bool {
                    return info.name == method->name && info.param_count == method->parameters_count;
                });

                if (method_overload_info == overloads.end())
                {
                    KlassOverloadInfo info;
                    info.name = method->name;
                    info.param_count = method->parameters_count;
                    info.methods.push_back(method);
                    overloads.push_back(std::move(info));
                }
                else
                    method_overload_info->methods.push_back(method);
            }

            it = nullptr;
            for (auto i = 0; i < klass->property_count; ++i)
            {
                auto prop = il2cpp_class_get_properties(klass, &it);
                if (prop->get != nullptr)
                {
                    KlassOverloadInfo info;
                    info.name = prop->get->name;
                    info.param_count = 0;
                    info.methods.push_back(prop->get);
                    overloads.push_back(std::move(info));
                }

                if (prop->set != nullptr)
                {
                    KlassOverloadInfo info;
                    info.name = prop->set->name;
                    info.param_count = 1;
                    info.methods.push_back(prop->set);
                    overloads.push_back(std::move(info));
                }
            }

            resolved_klass_overloads[klass] = overloads;
        }
    }

    namespace unity
    {
        app::Transform* get_parent(app::Transform* object)
        {
            return Transform::get_parent(object);
        }

        app::Transform* get_transform(void* object)
        {
            auto go = reinterpret_cast<app::GameObject*>(object);
            return GameObject::get_transform(go);
        }

        std::vector<app::GameObject*> get_children(app::GameObject* game_object)
        {
            std::vector<app::GameObject*> children;
            auto transform = GameObject::get_transform(game_object);
            auto count = Transform::GetChildCount(transform);
            for (auto i = 0; i < count; ++i)
                children.push_back(Component::get_gameObject(
                    reinterpret_cast<app::Component*>(Transform::GetChild(transform, i))));

            return children;
        }

        app::Type* get_type(std::string_view namezpace, std::string_view name)
        {
            auto qualified = get_qualified(namezpace, name);
            auto type_str = reinterpret_cast<app::String*>(il2cpp::string_new(qualified));
            return Type::GetType(type_str, false);
        }

        std::vector<app::Component*> get_components_untyped(app::GameObject* game_object, std::string_view namezpace, std::string_view name)
        {
            std::vector<app::Component*> components;
            auto qualified = get_qualified(namezpace, name);
            auto type_str = reinterpret_cast<app::String*>(il2cpp::string_new(qualified));
            auto runtime_type = Type::GetType(type_str, false);
            auto c_array = GameObject::GetComponents(game_object, runtime_type);
            for (auto i = 0; i < c_array->max_length; ++i)
                components.push_back(reinterpret_cast<app::Component*>(c_array->vector[i]));

            return components;
        }

        app::ScriptableObject* create_scriptable_object_untyped(std::string_view namezpace, std::string_view name)
        {
            auto qualified = get_qualified(namezpace, name);
            auto type_str = reinterpret_cast<app::String*>(il2cpp::string_new(qualified));
            auto runtime_type = Type::GetType(type_str, false);
            return ScriptableObject::CreateInstance(runtime_type);
        }

        void destroy_object(void* object)
        {
            Object::Destroy(reinterpret_cast<app::Object*>(object));
        }

        app::GameObject* get_game_object(void* component)
        {
            return Component::get_gameObject(reinterpret_cast<app::Component*>(component));
        }

        app::Component* add_component_untyped(app::GameObject* game_object, std::string_view namezpace, std::string_view name)
        {
            auto qualified = get_qualified(namezpace, name);
            auto type_str = reinterpret_cast<app::String*>(il2cpp::string_new(qualified));
            auto runtime_type = Type::GetType(type_str, false);
            return GameObject::AddComponent(game_object, runtime_type);

        }

        std::string get_object_name(void* object)
        {
            auto cast_object = static_cast<app::Object*>(object);
            if (cast_object == nullptr)
                return "nullptr";

            auto csstr = Object::get_name(cast_object);
            return convert_csstring(csstr);
        }

        app::String* get_object_csname(void* object)
        {
            auto cast_object = static_cast<app::Object*>(object);
            if (cast_object == nullptr)
                return nullptr;

            return Object::get_name(cast_object);
        }

        int32_t get_scene_count()
        {
            return SceneManager::get_sceneCount();
        }

        app::Scene get_scene_at(int32_t i)
        {
            return SceneManager::GetSceneAt(i);
        }

        app::Scene get_active_scene()
        {
            return SceneManager::GetActiveScene();
        }

        app::Scene get_scene(app::GameObject* game_object)
        {
            return GameObject::get_scene(game_object);
        }

        std::vector<app::GameObject*> get_root_game_objects(app::Scene& scene)
        {
            std::vector<app::GameObject*> output;
            auto boxed = box_value<app::Scene__Boxed>(get_class("UnityEngine.SceneManagement", "Scene"), scene);
            auto game_objects = Scene::GetRootGameObjects(boxed);
            for (auto i = 0; i < game_objects->max_length; ++i)
                output.push_back(game_objects->vector[i]);

            return output;
        }

        std::string get_scene_name(app::Scene& scene)
        {
            auto boxed = box_value<app::Scene__Boxed>(get_class("UnityEngine.SceneManagement", "Scene"), scene);
            auto csstring = Scene::get_name(boxed);
            return convert_csstring(csstring);
        }

        std::string get_scene_path(app::Scene& scene)
        {
            auto boxed = box_value<app::Scene__Boxed>(get_class("UnityEngine.SceneManagement", "Scene"), scene);
            auto csstring = Scene::get_path(boxed);
            return convert_csstring(csstring);
        }
    }

    namespace untyped
    {
        Il2CppObject* create_object(std::string_view namezpace, std::string_view klass, std::string_view nested)
        {
            auto actual_klass = get_nested_class(namezpace, klass, nested);
            if (actual_klass == nullptr)
                return nullptr;

            return create_object(actual_klass);
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
                trace(modloader::MessageType::Error, 1, "il2cpp", format("Failed to find klass %s", full_name.c_str()));
            
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
                trace(modloader::MessageType::Error, 1, "il2cpp", format("Failed to find klass %s", full_name.c_str()));

            return output;
        }

        Il2CppArray* array_new(Il2CppClass* element, il2cpp_array_size_t length)
        {
            return il2cpp_array_new(element, length);
        }

        Il2CppArray* array_new_specific(Il2CppClass* array_klass, il2cpp_array_size_t length)
        {
            return il2cpp_array_new_specific(array_klass, length);
        }

        Il2CppArray* array_new_full(Il2CppClass* array_klass, il2cpp_array_size_t* lengths, il2cpp_array_size_t* lower_bounds)
        {
            return il2cpp_array_new_full(array_klass, lengths, lower_bounds);
        }
    }

    void free_obj(void* obj)
    {
        il2cpp_free(obj);
    }

    uint32_t gchandle_new(void* obj, bool pinned)
    {
        return il2cpp_gchandle_new(reinterpret_cast<Il2CppObject*>(obj), pinned);
    }

    uint32_t gchandle_new_weak(void* obj, bool track_ressurection)
    {
        return il2cpp_gchandle_new_weakref(reinterpret_cast<Il2CppObject*>(obj), track_ressurection);
    }

    Il2CppObject* gchandle_target(uint32_t handle)
    {
        return il2cpp_gchandle_get_target(handle);
    }

    void gchandle_free(uint32_t handle)
    {
        il2cpp_gchandle_free(handle);
    }

    Il2CppString* string_new(std::string_view str)
    {
        return il2cpp_string_new_wrapper(str.data());
    }

    Il2CppString* string_new(std::string_view str, uint32_t len)
    {
        return il2cpp_string_new_len(str.data(), len);
    }

    Il2CppString* string_new(std::wstring_view str)
    {
        return il2cpp_string_new_utf16(reinterpret_cast<const Il2CppChar*>(str.data()), str.length());
    }

    KlassOverloadInfo const* get_method_info_internal(Il2CppClass* klass, std::string_view method, int param_count)
    {
        auto method_overloads = resolved_klass_overloads.find(klass);
        if (method_overloads == resolved_klass_overloads.end())
        {
            resolve_overloads(klass);
            method_overloads = resolved_klass_overloads.find(klass);
        }

        std::vector<KlassOverloadInfo> const& methods = method_overloads->second;
        auto method_overload_info = std::find_if(methods.begin(), methods.end(), [&method, &param_count](KlassOverloadInfo const& info) -> bool {
            return info.name == method && info.param_count == param_count;
        });

        if (method_overload_info == methods.end())
        {
            if (klass->parent != nullptr)
            {
                auto info = get_method_info_internal(klass->parent, method, param_count);
                if (info != nullptr)
                    return info;
            }

            trace(modloader::MessageType::Error, 1, "il2cpp", format("Could not find method '%s:%d' in klass '%s'", method.data(), param_count, klass->name));
            return nullptr;
        }

        return (&*method_overload_info);
    }

    int get_method_overload_count(Il2CppClass* klass, std::string_view method, int param_count)
    {
        auto method_overloads = resolved_klass_overloads.find(klass);
        if (method_overloads == resolved_klass_overloads.end())
        {
            resolve_overloads(klass);
            method_overloads = resolved_klass_overloads.find(klass);
        }

        std::vector<KlassOverloadInfo> const& methods = method_overloads->second;
        auto method_overload_info = std::find_if(methods.begin(), methods.end(), [&method, &param_count](KlassOverloadInfo const& info) -> bool {
            return info.name == method && info.param_count == param_count;
        });

        if (method_overload_info == methods.end())
            return 0;

        return method_overload_info->methods.size();
    }

    MethodInfo const* get_method_from_name_overloaded(Il2CppClass* klass, std::string_view method, int param_count, int overload)
    {
        auto info = get_method_info_internal(klass, method, param_count);
        if (info == nullptr)
            return nullptr;

        if (info->methods.size() <= overload)
        {
            trace(modloader::MessageType::Error, 1, "il2cpp", format("OVerload '%d' for '%s:%d' in klass '%s' does not exist",
                overload, method.data(), param_count, klass->name));
        }

        return info->methods.at(overload);
    }

    MethodInfo const* get_method_from_name_params(Il2CppClass* klass, std::string_view method, std::vector<void*> const& params)
    {
        auto info = get_method_info_internal(klass, method, params.size());
        if (info == nullptr)
            return nullptr;

        if (info->methods.size() == 1)
            return info->methods.front();
        else
        {
            bool first = true;
            for (auto method_info : info->methods)
            {
                auto valid = true;
                for (auto i = 0; valid && i < method_info->parameters_count; ++i)
                {
                    auto& param = method_info->parameters[i];
                    switch (param.parameter_type->type)
                    {
                    case Il2CppTypeEnum::IL2CPP_TYPE_BOOLEAN:
                    case Il2CppTypeEnum::IL2CPP_TYPE_U1:
                    case Il2CppTypeEnum::IL2CPP_TYPE_I1:
                    case Il2CppTypeEnum::IL2CPP_TYPE_U2:
                    case Il2CppTypeEnum::IL2CPP_TYPE_I2:
                    case Il2CppTypeEnum::IL2CPP_TYPE_CHAR:
                    case Il2CppTypeEnum::IL2CPP_TYPE_U4:
                    case Il2CppTypeEnum::IL2CPP_TYPE_I4:
                    case Il2CppTypeEnum::IL2CPP_TYPE_U8:
                    case Il2CppTypeEnum::IL2CPP_TYPE_I8:
                    case Il2CppTypeEnum::IL2CPP_TYPE_R4:
                    case Il2CppTypeEnum::IL2CPP_TYPE_R8:
                        break;
                    case Il2CppTypeEnum::IL2CPP_TYPE_VALUETYPE:
                    {
                        auto param_klass = il2cpp_class_from_type(param.parameter_type);
                        if (il2cpp_class_is_enum(param_klass))
                            continue;
                        break;
                    }
                    case Il2CppTypeEnum::IL2CPP_TYPE_STRING:
                    case Il2CppTypeEnum::IL2CPP_TYPE_PTR:
                    case Il2CppTypeEnum::IL2CPP_TYPE_U:
                    case Il2CppTypeEnum::IL2CPP_TYPE_I:
                    case Il2CppTypeEnum::IL2CPP_TYPE_SZARRAY:
                    case Il2CppTypeEnum::IL2CPP_TYPE_ARRAY:
                    case Il2CppTypeEnum::IL2CPP_TYPE_OBJECT:
                    case Il2CppTypeEnum::IL2CPP_TYPE_VAR:
                    case Il2CppTypeEnum::IL2CPP_TYPE_MVAR:
                    case Il2CppTypeEnum::IL2CPP_TYPE_TYPEDBYREF:
                    case Il2CppTypeEnum::IL2CPP_TYPE_VOID:
                    case Il2CppTypeEnum::IL2CPP_TYPE_CLASS:
                    case Il2CppTypeEnum::IL2CPP_TYPE_GENERICINST:
                    {
                        auto value = reinterpret_cast<Il2CppObject*>(params.at(param.position));
                        auto klass_1 = il2cpp_class_from_type(param.parameter_type);
                        auto klass_2 = value->klass;
                        if (!untyped::is_assignable(klass_2, klass_1))
                            valid = false;
                        break;
                    }
                    default:
                        break;
                    }
                }

                if (valid)
                    return method_info;
            }
        }

        trace(modloader::MessageType::Error, 3, "il2cpp", format("could not find a method overload for '%s:%d'in klass '%s' that matched parameters",
            method.data(), params.size(), klass->name));
        return nullptr;
    }

    MethodInfo const* get_method_from_name(Il2CppClass* klass, std::string_view method, std::vector<Il2CppClass*> const& params)
    {
        auto info = get_method_info_internal(klass, method, params.size());
        if (info == nullptr)
            return nullptr;

        if (info->methods.size() == 1)
            return info->methods.front();
        else
        {
            bool first = true;
            for (auto method_info : info->methods)
            {
                auto valid = true;
                for (auto i = 0; valid && i < method_info->parameters_count; ++i)
                {
                    auto& param = method_info->parameters[i];
                    auto klass_1 = il2cpp_class_from_type(param.parameter_type);
                    auto klass_2 = params.at(param.position);
                    if (klass_1 != klass_2)
                        valid = false;
                }

                if (valid)
                    return method_info;
            }
        }

        trace(modloader::MessageType::Error, 3, "il2cpp", format("could not find a method overload for '%s:%d'in klass '%s' that matched parameters",
            method.data(), params.size(), klass->name));

        trace(modloader::MessageType::Info, 3, "il2cpp", "valid parameters are:");
        for (auto method_info : info->methods)
        {
            std::string params = " - ";
            for (auto i = 0; i < method_info->parameters_count; ++i)
            {
                auto& param = method_info->parameters[i];
                auto klass = il2cpp_class_from_type(param.parameter_type);
                params += get_full_name(klass->namespaze, klass->name);
                params += ", ";
            }

            trace(modloader::MessageType::Info, 3, "il2cpp", params);
        }

        return nullptr;
    }

    MethodInfo const* get_method_from_name(Il2CppClass* klass, std::string_view method, std::vector<KlassDescriptor> const& params)
    {
        auto info = get_method_info_internal(klass, method, params.size());
        if (info == nullptr)
            return nullptr;

        if (info->methods.size() == 1)
            return info->methods.front();
        else
        {
            bool first = true;
            for (auto method_info : info->methods)
            {
                auto valid = true;
                for (auto i = 0; valid && i < method_info->parameters_count; ++i)
                {
                    auto& param = method_info->parameters[i];
                    auto klass_1 = il2cpp_class_from_type(param.parameter_type);
                    auto& klass_2 = params.at(param.position);
                    if (klass_2.klass == nullptr)
                    {
                        if (klass_1->namespaze != klass_2.namezpace || klass_1->name != klass_2.name)
                            valid = false;
                    }
                    else if (klass_1 != klass_2.klass)
                        valid = false;

                }

                if (valid)
                    return method_info;
            }
        }

        trace(modloader::MessageType::Error, 3, "il2cpp", format("could not find a method overload for '%s:%d'in klass '%s' that matched parameters",
            method.data(), params.size(), klass->name));

        trace(modloader::MessageType::Info, 3, "il2cpp", "valid parameters are:");
        for (auto method_info : info->methods)
        {
            std::string params = " - ";
            for (auto i = 0; i < method_info->parameters_count; ++i)
            {
                auto& param = method_info->parameters[i];
                auto klass = il2cpp_class_from_type(param.parameter_type);
                params += get_full_name(klass->namespaze, klass->name);
                params += ", ";
            }

            trace(modloader::MessageType::Info, 3, "il2cpp", params);
        }

        return nullptr;
    }

    Il2CppObject* invoke_v(void* obj, std::string_view method, std::vector<void*> params)
    {
        auto cast_obj = reinterpret_cast<Il2CppObject*>(obj);
        Il2CppException* exc = nullptr;
        auto method_info = get_method_from_name_params(cast_obj->klass, method.data(), params);
        if (method_info == nullptr)
        {
            trace(modloader::MessageType::Error, 1, "il2cpp", format("failed to find method '%s'", method.data()));
            return nullptr;
        }

        void** start = params.data();
        return il2cpp_runtime_invoke(method_info, cast_obj, start, &exc);
    }

    Il2CppObject* invoke_virtual_v(void* obj, Il2CppClass* base, std::string_view method, std::vector<void*> params)
    {
        auto cast_obj = reinterpret_cast<Il2CppObject*>(obj);
        Il2CppException* exc = nullptr;
        auto method_info = get_method_from_name_params(base, method.data(), params);
        if (method_info == nullptr)
        {
            trace(modloader::MessageType::Error, 1, "il2cpp", format("failed to find method '%s'", method.data()));
            return nullptr;
        }

        auto virtual_method_info = il2cpp_object_get_virtual_method(cast_obj, method_info);
        if (virtual_method_info == nullptr)
        {
            trace(modloader::MessageType::Error, 1, "il2cpp", format("failed to find virtual method '%s'", method.data()));
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
        return *reinterpret_cast<MethodInfo**>(modloader::intercept::resolve_rva(address));
    }

    std::string convert_csstring(app::String* str)
    {
        std::string cppstr;
        if (str == nullptr)
            return cppstr;

        auto chars = String::ToCharArray(str);
        if (chars == nullptr)
            return cppstr;

        std::wstring wstr(reinterpret_cast<wchar_t*>(chars->vector), str->fields.m_stringLength);
        using convert_type = std::codecvt_utf8<wchar_t>;
        std::wstring_convert<convert_type, wchar_t> converter;
        cppstr = converter.to_bytes(wstr);

        return cppstr;
    }
}