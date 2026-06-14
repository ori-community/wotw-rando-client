#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OutAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OutAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_OutAttribute_DEFINED)
#define IL2CPP_STRUCT_OutAttribute_DEFINED
struct OutAttribute__Class;
struct OutAttribute {
    struct OutAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_OutAttribute_FWDDECL)
#define IL2CPP_STRUCT_OutAttribute_FWDDECL
#include <Modloader/app/structs/OutAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_OutAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_OutAttribute_DEFINED) && !defined(IL2CPP_STRUCT_OutAttribute_FWDDECL)
#include <Modloader/app/structs/OutAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OutAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
