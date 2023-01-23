#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RijndaelManagedTransform__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RijndaelManagedTransform__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RijndaelManagedTransform__StaticFields_DEFINED)
#define IL2CPP_STRUCT_RijndaelManagedTransform__StaticFields_DEFINED
struct Byte__Array;
struct Int32__Array;
struct RijndaelManagedTransform__StaticFields {
    struct Byte__Array* s_Sbox;
    struct Int32__Array* s_Rcon;
    struct Int32__Array* s_T;
    struct Int32__Array* s_TF;
    struct Int32__Array* s_iT;
    struct Int32__Array* s_iTF;
};
#endif
#if !defined(IL2CPP_STRUCT_RijndaelManagedTransform__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_RijndaelManagedTransform__StaticFields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Int32__Array.h>
#endif
#undef IL2CPP_STRUCT_RijndaelManagedTransform__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RijndaelManagedTransform__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_RijndaelManagedTransform__StaticFields_FWDDECL)
#include <Modloader/app/structs/RijndaelManagedTransform__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RijndaelManagedTransform__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
