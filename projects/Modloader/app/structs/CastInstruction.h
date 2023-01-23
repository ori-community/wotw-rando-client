#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CastInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CastInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_CastInstruction_DEFINED)
#define IL2CPP_STRUCT_CastInstruction_DEFINED
struct CastInstruction__Class;
struct CastInstruction {
    struct CastInstruction__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CastInstruction_FWDDECL)
#define IL2CPP_STRUCT_CastInstruction_FWDDECL
#include <Modloader/app/structs/CastInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_CastInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_CastInstruction_DEFINED) && !defined(IL2CPP_STRUCT_CastInstruction_FWDDECL)
#include <Modloader/app/structs/CastInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CastInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
