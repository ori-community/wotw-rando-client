#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PearsonHash__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PearsonHash__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PearsonHash__StaticFields_DEFINED)
#define IL2CPP_STRUCT_PearsonHash__StaticFields_DEFINED
struct UInt16__Array;
struct PearsonHash__StaticFields {
    struct UInt16__Array* m_table;
};
#endif
#if !defined(IL2CPP_STRUCT_PearsonHash__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_PearsonHash__StaticFields_FWDDECL
#include <Modloader/app/structs/UInt16__Array.h>
#endif
#undef IL2CPP_STRUCT_PearsonHash__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PearsonHash__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_PearsonHash__StaticFields_FWDDECL)
#include <Modloader/app/structs/PearsonHash__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PearsonHash__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
