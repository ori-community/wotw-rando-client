#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AutoFillOnCreationAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AutoFillOnCreationAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutoFillOnCreationAttribute_DEFINED)
#include <Modloader/app/structs/AutoFillOnCreationAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_AutoFillOnCreationAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_AutoFillOnCreationAttribute_DEFINED
struct AutoFillOnCreationAttribute__Class;
struct AutoFillOnCreationAttribute {
    struct AutoFillOnCreationAttribute__Class* klass;
    MonitorData* monitor;
    struct AutoFillOnCreationAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AutoFillOnCreationAttribute_FWDDECL)
#define IL2CPP_STRUCT_AutoFillOnCreationAttribute_FWDDECL
#include <Modloader/app/structs/AutoFillOnCreationAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_AutoFillOnCreationAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutoFillOnCreationAttribute_DEFINED) && !defined(IL2CPP_STRUCT_AutoFillOnCreationAttribute_FWDDECL)
#include <Modloader/app/structs/AutoFillOnCreationAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AutoFillOnCreationAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
