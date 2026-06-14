#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExposedProperty__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExposedProperty__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExposedProperty__Fields_DEFINED)
#include <Modloader/app/structs/ExposedPropertyCategory__Enum.h>
#if defined(IL2CPP_STRUCT_ExposedPropertyCategory__Enum_DEFINED)
#define IL2CPP_STRUCT_ExposedProperty__Fields_DEFINED
struct String;
struct Component_1;
struct __declspec(align(8)) ExposedProperty__Fields {
    int32_t Id;
    ExposedPropertyCategory__Enum Category;

    struct String* Name;
    struct String* PropertyPath;
    struct Component_1* Component;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExposedProperty__Fields_FWDDECL)
#define IL2CPP_STRUCT_ExposedProperty__Fields_FWDDECL
#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ExposedProperty__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExposedProperty__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ExposedProperty__Fields_FWDDECL)
#include <Modloader/app/structs/ExposedProperty__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExposedProperty__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
