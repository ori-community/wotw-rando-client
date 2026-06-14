#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NotImplementedException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NotImplementedException_INITIALIZING
#if !defined(IL2CPP_STRUCT_NotImplementedException_DEFINED)
#include <Modloader/app/structs/NotImplementedException__Fields.h>
#if defined(IL2CPP_STRUCT_NotImplementedException__Fields_DEFINED)
#define IL2CPP_STRUCT_NotImplementedException_DEFINED
struct NotImplementedException__Class;
struct NotImplementedException {
    struct NotImplementedException__Class* klass;
    MonitorData* monitor;
    struct NotImplementedException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NotImplementedException_FWDDECL)
#define IL2CPP_STRUCT_NotImplementedException_FWDDECL
#include <Modloader/app/structs/NotImplementedException__Class.h>
#endif
#undef IL2CPP_STRUCT_NotImplementedException_INITIALIZING
#if !defined(IL2CPP_STRUCT_NotImplementedException_DEFINED) && !defined(IL2CPP_STRUCT_NotImplementedException_FWDDECL)
#include <Modloader/app/structs/NotImplementedException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NotImplementedException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
