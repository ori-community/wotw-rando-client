#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ViaHeaderValue_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ViaHeaderValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_ViaHeaderValue_DEFINED)
#include <Modloader/app/structs/ViaHeaderValue__Fields.h>
#if defined(IL2CPP_STRUCT_ViaHeaderValue__Fields_DEFINED)
#define IL2CPP_STRUCT_ViaHeaderValue_DEFINED
struct ViaHeaderValue__Class;
struct ViaHeaderValue {
    struct ViaHeaderValue__Class* klass;
    MonitorData* monitor;
    struct ViaHeaderValue__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ViaHeaderValue_FWDDECL)
#define IL2CPP_STRUCT_ViaHeaderValue_FWDDECL
#include <Modloader/app/structs/ViaHeaderValue__Class.h>
#endif
#undef IL2CPP_STRUCT_ViaHeaderValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_ViaHeaderValue_DEFINED) && !defined(IL2CPP_STRUCT_ViaHeaderValue_FWDDECL)
#include <Modloader/app/structs/ViaHeaderValue.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ViaHeaderValue.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
