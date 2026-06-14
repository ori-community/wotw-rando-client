#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ByRefNewInstruction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ByRefNewInstruction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ByRefNewInstruction__Fields_DEFINED)
#include <Modloader/app/structs/NewInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_NewInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_ByRefNewInstruction__Fields_DEFINED
struct ByRefUpdater__Array;
struct ByRefNewInstruction__Fields {
    struct NewInstruction__Fields _;
    struct ByRefUpdater__Array* _byrefArgs;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ByRefNewInstruction__Fields_FWDDECL)
#define IL2CPP_STRUCT_ByRefNewInstruction__Fields_FWDDECL
#include <Modloader/app/structs/ByRefUpdater__Array.h>
#endif
#undef IL2CPP_STRUCT_ByRefNewInstruction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ByRefNewInstruction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ByRefNewInstruction__Fields_FWDDECL)
#include <Modloader/app/structs/ByRefNewInstruction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ByRefNewInstruction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
