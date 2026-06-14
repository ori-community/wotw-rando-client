#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BitSet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BitSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_BitSet_DEFINED)
#include <Modloader/app/structs/BitSet__Fields.h>
#if defined(IL2CPP_STRUCT_BitSet__Fields_DEFINED)
#define IL2CPP_STRUCT_BitSet_DEFINED
struct BitSet__Class;
struct BitSet {
    struct BitSet__Class* klass;
    MonitorData* monitor;
    struct BitSet__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BitSet_FWDDECL)
#define IL2CPP_STRUCT_BitSet_FWDDECL
#include <Modloader/app/structs/BitSet__Class.h>
#endif
#undef IL2CPP_STRUCT_BitSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_BitSet_DEFINED) && !defined(IL2CPP_STRUCT_BitSet_FWDDECL)
#include <Modloader/app/structs/BitSet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BitSet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
