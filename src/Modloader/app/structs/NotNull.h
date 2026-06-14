#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NotNull_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NotNull_INITIALIZING
#if !defined(IL2CPP_STRUCT_NotNull_DEFINED)
#define IL2CPP_STRUCT_NotNull_DEFINED
struct NotNull__Class;
struct NotNull {
    struct NotNull__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_NotNull_FWDDECL)
#define IL2CPP_STRUCT_NotNull_FWDDECL
#include <Modloader/app/structs/NotNull__Class.h>
#endif
#undef IL2CPP_STRUCT_NotNull_INITIALIZING
#if !defined(IL2CPP_STRUCT_NotNull_DEFINED) && !defined(IL2CPP_STRUCT_NotNull_FWDDECL)
#include <Modloader/app/structs/NotNull.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NotNull.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
