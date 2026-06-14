#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Poser_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Poser_INITIALIZING
#if !defined(IL2CPP_STRUCT_Poser_DEFINED)
#include <Modloader/app/structs/Poser__Fields.h>
#if defined(IL2CPP_STRUCT_Poser__Fields_DEFINED)
#define IL2CPP_STRUCT_Poser_DEFINED
struct Poser__Class;
struct Poser {
    struct Poser__Class* klass;
    MonitorData* monitor;
    struct Poser__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Poser_FWDDECL)
#define IL2CPP_STRUCT_Poser_FWDDECL
#include <Modloader/app/structs/Poser__Class.h>
#endif
#undef IL2CPP_STRUCT_Poser_INITIALIZING
#if !defined(IL2CPP_STRUCT_Poser_DEFINED) && !defined(IL2CPP_STRUCT_Poser_FWDDECL)
#include <Modloader/app/structs/Poser.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Poser.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
