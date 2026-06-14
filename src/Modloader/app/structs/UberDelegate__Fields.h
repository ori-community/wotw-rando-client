#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberDelegate__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberDelegate__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberDelegate__Fields_DEFINED)
#define IL2CPP_STRUCT_UberDelegate__Fields_DEFINED
struct List_1_System_Action_;
struct __declspec(align(8)) UberDelegate__Fields {
    struct List_1_System_Action_* m_registers;
    struct List_1_System_Action_* m_registersToDelete;
    bool m_isIterating;
};
#endif
#if !defined(IL2CPP_STRUCT_UberDelegate__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberDelegate__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_Action_.h>
#endif
#undef IL2CPP_STRUCT_UberDelegate__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberDelegate__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberDelegate__Fields_FWDDECL)
#include <Modloader/app/structs/UberDelegate__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberDelegate__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
