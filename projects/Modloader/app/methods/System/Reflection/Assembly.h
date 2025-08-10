#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Assembly.h>
#include <Modloader/app/structs/AssemblyName.h>
#include <Modloader/app/structs/AssemblyNameFlags__Enum.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/Evidence.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/ManifestResourceInfo.h>
#include <Modloader/app/structs/Module.h>
#include <Modloader/app/structs/Module__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/RuntimeAssembly.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StackCrawlMark__Enum.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Type__Array.h>
#include <Modloader/app/structs/Version.h>

namespace app::classes::System::Reflection::Assembly {
    IL2CPP_REGISTER_METHOD(0x02280FB0, void, ctor, app::Assembly* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022810F0, app::String*, get_code_base, app::Assembly* this_ptr, bool escaped)
    IL2CPP_REGISTER_METHOD(0x02281100, app::String*, get_fullname, app::Assembly* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02281190, app::String*, get_location, app::Assembly* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::String*, GetAotId, )
    IL2CPP_REGISTER_METHOD(0x022810F0, app::String*, GetCodeBase, app::Assembly* this_ptr, bool escaped)
    IL2CPP_REGISTER_METHOD(0x022811A0, app::String*, get_CodeBase, app::Assembly* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022811B0, app::String*, get_EscapedCodeBase, app::Assembly* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01742A00, app::String*, get_FullName, app::Assembly* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022811C0, app::String*, get_Location, app::Assembly* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02281260, void, GetObjectData, app::Assembly* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x022812B0, bool, IsDefined, app::Assembly* this_ptr, app::Type* attribute_type, bool inherit)
    IL2CPP_REGISTER_METHOD(0x02281370, app::Object__Array*, GetCustomAttributes_1, app::Assembly* this_ptr, bool inherit)
    IL2CPP_REGISTER_METHOD(0x02281420, app::Object__Array*, GetCustomAttributes_2, app::Assembly* this_ptr, app::Type* attribute_type, bool inherit)
    IL2CPP_REGISTER_METHOD(0x022814E0, void*, GetManifestResourceInternal, app::Assembly* this_ptr, app::String* name, int32_t* size, app::Module** module)
    IL2CPP_REGISTER_METHOD(0x022814F0, app::Stream*, GetManifestResourceStream_1, app::Assembly* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(
        0x02281BA0,
        app::Stream*,
        GetManifestResourceStream_2,
        app::Assembly* this_ptr,
        app::Type* type,
        app::String* name,
        bool skip_security_check,
        app::StackCrawlMark__Enum* stack_mark
    )
    IL2CPP_REGISTER_METHOD(
        0x02281E20,
        app::Stream*,
        GetManifestResourceStream_3,
        app::Assembly* this_ptr,
        app::String* name,
        app::StackCrawlMark__Enum* stack_mark,
        bool skip_security_check
    )
    IL2CPP_REGISTER_METHOD(0x02281E50, app::String*, GetSimpleName, app::Assembly* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02281E80, app::Byte__Array*, GetPublicKey, app::Assembly* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02281EB0, app::Version*, GetVersion, app::Assembly* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02281EE0, app::AssemblyNameFlags__Enum, GetFlags, app::Assembly* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02281F10, app::Type__Array*, GetTypes_1, app::Assembly* this_ptr, bool exported_only)
    IL2CPP_REGISTER_METHOD(0x02282080, app::Type__Array*, GetTypes_2, app::Assembly* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022820A0, app::Type*, GetType_1, app::Assembly* this_ptr, app::String* name, bool throw_on_error)
    IL2CPP_REGISTER_METHOD(0x022820D0, app::Type*, GetType_2, app::Assembly* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(
        0x02282100,
        app::Type*,
        InternalGetType,
        app::Assembly* this_ptr,
        app::Module* module,
        app::String* name,
        bool throw_on_error,
        bool ignore_case
    )
    IL2CPP_REGISTER_METHOD(0x02282110, app::AssemblyName*, GetName_1, app::Assembly* this_ptr, bool copied_name)
    IL2CPP_REGISTER_METHOD(0x02282160, app::AssemblyName*, GetName_2, app::Assembly* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02282180, app::String*, ToString, app::Assembly* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02282230, app::Assembly*, GetAssembly, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Assembly*, GetEntryAssembly, )
    IL2CPP_REGISTER_METHOD(
        0x02282310,
        app::RuntimeAssembly*,
        InternalGetSatelliteAssembly,
        app::Assembly* this_ptr,
        app::String* name,
        app::CultureInfo* culture,
        app::Version* version,
        bool throw_on_file_not_found,
        app::StackCrawlMark__Enum* stack_mark
    )
    IL2CPP_REGISTER_METHOD(0x022829A0, app::Assembly*, LoadFrom_1, app::String* assembly_file, bool refonly)
    IL2CPP_REGISTER_METHOD(0x022829A0, app::Assembly*, LoadFrom_2, app::String* assembly_file)
    IL2CPP_REGISTER_METHOD(0x02282B00, app::Assembly*, Load, app::String* assembly_string)
    IL2CPP_REGISTER_METHOD(0x02282D60, app::Assembly*, LoadWithPartialName_1, app::String* partial_name)
    IL2CPP_REGISTER_METHOD(0x02282D70, app::Assembly*, load_with_partial_name, app::String* name, app::Evidence* e)
    IL2CPP_REGISTER_METHOD(0x02282E40, app::Assembly*, LoadWithPartialName_2, app::String* partial_name, app::Evidence* security_evidence)
    IL2CPP_REGISTER_METHOD(0x02282E50, app::Assembly*, LoadWithPartialName_3, app::String* partial_name, app::Evidence* security_evidence, bool old_behavior)
    IL2CPP_REGISTER_METHOD(0x02282FE0, app::Module__Array*, GetModules_1, app::Assembly* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02283000, app::Module__Array*, GetModulesInternal, app::Assembly* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02283050, app::String__Array*, GetManifestResourceNames, app::Assembly* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022831B0, app::Assembly*, GetExecutingAssembly, )
    IL2CPP_REGISTER_METHOD(0x02283230, app::Assembly*, GetCallingAssembly, )
    IL2CPP_REGISTER_METHOD(0x02283330, bool, GetManifestResourceInfoInternal, app::Assembly* this_ptr, app::String* name, app::ManifestResourceInfo* info)
    IL2CPP_REGISTER_METHOD(0x02283340, app::ManifestResourceInfo*, GetManifestResourceInfo, app::Assembly* this_ptr, app::String* resource_name)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ReflectionOnly, app::Assembly* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0194D440, int32_t, GetHashCode, app::Assembly* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02283530, bool, Equals, app::Assembly* this_ptr, app::Object* o)
    IL2CPP_REGISTER_METHOD(0x02283610, app::Exception*, CreateNIE, )
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsFullyTrusted, app::Assembly* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02283760, app::Type*, GetType_3, app::Assembly* this_ptr, app::String* name, bool throw_on_error, bool ignore_case)
    IL2CPP_REGISTER_METHOD(0x022837A0, app::Module*, GetModule, app::Assembly* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x022837E0, app::Module__Array*, GetModules_2, app::Assembly* this_ptr, bool get_resource_modules)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsDynamic, app::Assembly* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02283820, bool, op_Equality, app::Assembly* left, app::Assembly* right)
    IL2CPP_REGISTER_METHOD(0x02283870, bool, op_Inequality, app::Assembly* left, app::Assembly* right)
    inline bool operator==(app::Assembly& left, app::Assembly& right) { return op_Equality(&left, &right); }
    inline bool operator!=(app::Assembly& left, app::Assembly& right) { return op_Inequality(&left, &right); }
} // namespace app::classes::System::Reflection::Assembly
