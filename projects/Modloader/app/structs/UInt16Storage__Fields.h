#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UInt16Storage__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UInt16Storage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UInt16Storage__Fields_DEFINED)
#include <Modloader/app/structs/DataStorage__Fields.h>
#if defined(IL2CPP_STRUCT_DataStorage__Fields_DEFINED)
#define IL2CPP_STRUCT_UInt16Storage__Fields_DEFINED
struct UInt16__Array;
struct UInt16Storage__Fields {
    struct DataStorage__Fields _;
    struct UInt16__Array* _values;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UInt16Storage__Fields_FWDDECL)
#define IL2CPP_STRUCT_UInt16Storage__Fields_FWDDECL
#include <Modloader/app/structs/UInt16__Array.h>
#endif
#undef IL2CPP_STRUCT_UInt16Storage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UInt16Storage__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UInt16Storage__Fields_FWDDECL)
#include <Modloader/app/structs/UInt16Storage__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UInt16Storage__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
