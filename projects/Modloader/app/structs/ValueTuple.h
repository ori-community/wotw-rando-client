#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ValueTuple_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ValueTuple_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValueTuple_DEFINED)
#define IL2CPP_STRUCT_ValueTuple_DEFINED
struct ValueTuple {
};
#endif
#if !defined(IL2CPP_STRUCT_ValueTuple_FWDDECL)
#define IL2CPP_STRUCT_ValueTuple_FWDDECL
#endif
#undef IL2CPP_STRUCT_ValueTuple_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValueTuple_DEFINED) && !defined(IL2CPP_STRUCT_ValueTuple_FWDDECL)
#include <Modloader/app/structs/ValueTuple.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ValueTuple.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
