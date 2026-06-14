#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Operand_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Operand_INITIALIZING
#if !defined(IL2CPP_STRUCT_Operand_DEFINED)
#include <Modloader/app/structs/Operand__Fields.h>
#if defined(IL2CPP_STRUCT_Operand__Fields_DEFINED)
#define IL2CPP_STRUCT_Operand_DEFINED
struct Operand__Class;
struct Operand {
    struct Operand__Class* klass;
    MonitorData* monitor;
    struct Operand__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Operand_FWDDECL)
#define IL2CPP_STRUCT_Operand_FWDDECL
#include <Modloader/app/structs/Operand__Class.h>
#endif
#undef IL2CPP_STRUCT_Operand_INITIALIZING
#if !defined(IL2CPP_STRUCT_Operand_DEFINED) && !defined(IL2CPP_STRUCT_Operand_FWDDECL)
#include <Modloader/app/structs/Operand.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Operand.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
