#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxOneSave_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxOneSave_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneSave_DEFINED)
#include <Modloader/app/structs/XboxOneSave__Fields.h>
#if defined(IL2CPP_STRUCT_XboxOneSave__Fields_DEFINED)
#define IL2CPP_STRUCT_XboxOneSave_DEFINED
struct XboxOneSave__Class;
struct XboxOneSave {
    struct XboxOneSave__Class* klass;
    MonitorData* monitor;
    struct XboxOneSave__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XboxOneSave_FWDDECL)
#define IL2CPP_STRUCT_XboxOneSave_FWDDECL
#include <Modloader/app/structs/XboxOneSave__Class.h>
#endif
#undef IL2CPP_STRUCT_XboxOneSave_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneSave_DEFINED) && !defined(IL2CPP_STRUCT_XboxOneSave_FWDDECL)
#include <Modloader/app/structs/XboxOneSave.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxOneSave.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
