#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DispIdAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DispIdAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DispIdAttribute_DEFINED)
#include <Modloader/app/structs/DispIdAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_DispIdAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_DispIdAttribute_DEFINED
struct DispIdAttribute__Class;
struct DispIdAttribute {
    struct DispIdAttribute__Class* klass;
    MonitorData* monitor;
    struct DispIdAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DispIdAttribute_FWDDECL)
#define IL2CPP_STRUCT_DispIdAttribute_FWDDECL
#include <Modloader/app/structs/DispIdAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_DispIdAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DispIdAttribute_DEFINED) && !defined(IL2CPP_STRUCT_DispIdAttribute_FWDDECL)
#include <Modloader/app/structs/DispIdAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DispIdAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
