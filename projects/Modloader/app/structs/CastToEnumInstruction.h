#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CastToEnumInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CastToEnumInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_CastToEnumInstruction_DEFINED)
#include <Modloader/app/structs/CastToEnumInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_CastToEnumInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_CastToEnumInstruction_DEFINED
struct CastToEnumInstruction__Class;
struct CastToEnumInstruction {
    struct CastToEnumInstruction__Class* klass;
    MonitorData* monitor;
    struct CastToEnumInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CastToEnumInstruction_FWDDECL)
#define IL2CPP_STRUCT_CastToEnumInstruction_FWDDECL
#include <Modloader/app/structs/CastToEnumInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_CastToEnumInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_CastToEnumInstruction_DEFINED) && !defined(IL2CPP_STRUCT_CastToEnumInstruction_FWDDECL)
#include <Modloader/app/structs/CastToEnumInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CastToEnumInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
