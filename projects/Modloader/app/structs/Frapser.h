#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Frapser_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Frapser_INITIALIZING
#if !defined(IL2CPP_STRUCT_Frapser_DEFINED)
#define IL2CPP_STRUCT_Frapser_DEFINED
struct Frapser__Class;
struct Frapser {
    struct Frapser__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Frapser_FWDDECL)
#define IL2CPP_STRUCT_Frapser_FWDDECL
#include <Modloader/app/structs/Frapser__Class.h>
#endif
#undef IL2CPP_STRUCT_Frapser_INITIALIZING
#if !defined(IL2CPP_STRUCT_Frapser_DEFINED) && !defined(IL2CPP_STRUCT_Frapser_FWDDECL)
#include <Modloader/app/structs/Frapser.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Frapser.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
