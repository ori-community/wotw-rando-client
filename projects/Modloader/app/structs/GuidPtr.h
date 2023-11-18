#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GuidPtr_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GuidPtr_INITIALIZING
#if !defined(IL2CPP_STRUCT_GuidPtr_DEFINED)
#define IL2CPP_STRUCT_GuidPtr_DEFINED
struct GuidPtr__Class;
struct GuidPtr {
    struct GuidPtr__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_GuidPtr_FWDDECL)
#define IL2CPP_STRUCT_GuidPtr_FWDDECL
#include <Modloader/app/structs/GuidPtr__Class.h>
#endif
#undef IL2CPP_STRUCT_GuidPtr_INITIALIZING
#if !defined(IL2CPP_STRUCT_GuidPtr_DEFINED) && !defined(IL2CPP_STRUCT_GuidPtr_FWDDECL)
#include <Modloader/app/structs/GuidPtr.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GuidPtr.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
