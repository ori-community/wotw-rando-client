#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinUI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinUI_DEFINED)
#include <Modloader/app/structs/SeinUI__Fields.h>
#if defined(IL2CPP_STRUCT_SeinUI__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinUI_DEFINED
struct SeinUI__Class;
struct SeinUI {
    struct SeinUI__Class* klass;
    MonitorData* monitor;
    struct SeinUI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinUI_FWDDECL)
#define IL2CPP_STRUCT_SeinUI_FWDDECL
#include <Modloader/app/structs/SeinUI__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinUI_DEFINED) && !defined(IL2CPP_STRUCT_SeinUI_FWDDECL)
#include <Modloader/app/structs/SeinUI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinUI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
