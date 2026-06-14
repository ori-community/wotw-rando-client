#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BindableAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BindableAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_BindableAttribute_DEFINED)
#include <Modloader/app/structs/BindableAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_BindableAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_BindableAttribute_DEFINED
struct BindableAttribute__Class;
struct BindableAttribute {
    struct BindableAttribute__Class* klass;
    MonitorData* monitor;
    struct BindableAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BindableAttribute_FWDDECL)
#define IL2CPP_STRUCT_BindableAttribute_FWDDECL
#include <Modloader/app/structs/BindableAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_BindableAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_BindableAttribute_DEFINED) && !defined(IL2CPP_STRUCT_BindableAttribute_FWDDECL)
#include <Modloader/app/structs/BindableAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BindableAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
