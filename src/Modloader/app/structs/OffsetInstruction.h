#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OffsetInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OffsetInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_OffsetInstruction_DEFINED)
#include <Modloader/app/structs/OffsetInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_OffsetInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_OffsetInstruction_DEFINED
struct OffsetInstruction__Class;
struct OffsetInstruction {
    struct OffsetInstruction__Class* klass;
    MonitorData* monitor;
    struct OffsetInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OffsetInstruction_FWDDECL)
#define IL2CPP_STRUCT_OffsetInstruction_FWDDECL
#include <Modloader/app/structs/OffsetInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_OffsetInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_OffsetInstruction_DEFINED) && !defined(IL2CPP_STRUCT_OffsetInstruction_FWDDECL)
#include <Modloader/app/structs/OffsetInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OffsetInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
