#include <il2cpp_helpers.h>
#include <common.h>
#include <interception_macros.h>
#include <dev/dev_commands.h>

#include <Common/ext.h>

namespace il2cpp
{
    namespace
    {
        std::unordered_map<std::string, Il2CppClass*> resolved_classes;

        BINDING(37033312, void, UnityEngine_Object__Destroy, (app::Object* this_ptr));
        BINDING(36928320, app::Component*, UnityEngine_GameObject__AddComponent, (app::GameObject* this_ptr, app::Type* componentType));
        BINDING(4521104, app::GameObject*, UnityEngine_Component__get_gameObject, (app::Component* this_ptr));
        BINDING(37030288, app::String*, UnityEngine_Object__get_name, (app::Object* this_ptr));
        BINDING(39804816, app::Type*, System_Type__GetType, (app::String* typeName));

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
    }

    namespace unity
    {
        void destroy_object(void* object)
        {
            UnityEngine_Object__Destroy(reinterpret_cast<app::Object*>(object));
        }

        app::GameObject* get_game_object(void* component)
        {
            return UnityEngine_Component__get_gameObject(reinterpret_cast<app::Component*>(component));
        }

        app::Component* add_component_untyped(app::GameObject* game_object, const char* full_name)
        {
            auto type_str = reinterpret_cast<app::String*>(il2cpp::string_new(full_name));
            auto runtime_type = System_Type__GetType(type_str);
            return UnityEngine_GameObject__AddComponent(game_object, runtime_type);

        }

        std::string get_object_name(void* object)
        {
            auto cast_object = static_cast<app::Object*>(object);
            auto csstr = UnityEngine_Object__get_name(cast_object);
            return convert_csstring(csstr);
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

        bool instance_of(Il2CppClass* klass, const char* namezpace, const char* name)
        {
            return instance_of(klass, get_class(namezpace, name));
        }

        int implements_interface(Il2CppClass* klass, const char* namezpace, const char* name)
        {
            return implements_interface(klass, get_class(namezpace, name));
        }

        bool instance_of(Il2CppClass* klass, Il2CppClass* parent)
        {
            for (auto i = 0; i < klass->typeHierarchyDepth; ++i)
                if (klass->typeHierarchy[i] == klass)
                    return true;

            return false;
        }

        int implements_interface(Il2CppClass* klass, Il2CppClass* iklass)
        {
            for (auto i = 0; i < klass->interfaces_count; ++i)
                if (klass->implementedInterfaces[i] == iklass)
                    return i;

            return -1;
        }
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

        return il2cpp_runtime_invoke(method_info, cast_obj, params.data(), &exc);
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

        return il2cpp_runtime_invoke(virtual_method_info, cast_obj, params.data(), &exc);
    }

    bool instance_of(void* obj, const char* namezpace, const char* name)
    {
        return untyped::instance_of(reinterpret_cast<Il2CppObject*>(obj)->klass, namezpace, name);
    }

    bool implements_interface(void* obj, const char* namezpace, const char* name)
    {
        return untyped::instance_of(reinterpret_cast<Il2CppObject*>(obj)->klass, namezpace, name);
    }

    Il2CppClass* get_class(const char* namezpace, const char* name)
    {
        std::string full_name = std::string(namezpace) + "." + name;
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

        if (klass != nullptr)
            resolved_classes[full_name] = klass;
        else
            trace(MessageType::Error, 1, "il2cpp", format("Failed to find klass %s.%s", namezpace, name));

        return klass;
    }

    MethodInfo* resolve_generic_method(uint64_t address)
    {
        return *reinterpret_cast<MethodInfo**>(resolve_rva(address));
    }
}