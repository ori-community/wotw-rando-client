#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SR_6_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SR_6_INITIALIZING
#if !defined(IL2CPP_STRUCT_SR_6_DEFINED)
#define IL2CPP_STRUCT_SR_6_DEFINED
struct SR_6__Class;
struct SR_6 {
    struct SR_6__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SR_6_FWDDECL)
#define IL2CPP_STRUCT_SR_6_FWDDECL
#include <Modloader/app/structs/SR_6__Class.h>
#endif
#undef IL2CPP_STRUCT_SR_6_INITIALIZING
#if !defined(IL2CPP_STRUCT_SR_6_DEFINED) && !defined(IL2CPP_STRUCT_SR_6_FWDDECL)
#include <Modloader/app/structs/SR_6.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SR_6.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
