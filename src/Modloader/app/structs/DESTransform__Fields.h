#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DESTransform__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DESTransform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DESTransform__Fields_DEFINED)
#include <Modloader/app/structs/SymmetricTransform__Fields.h>
#if defined(IL2CPP_STRUCT_SymmetricTransform__Fields_DEFINED)
#define IL2CPP_STRUCT_DESTransform__Fields_DEFINED
struct Byte__Array;
struct UInt32__Array;
struct DESTransform__Fields {
    struct SymmetricTransform__Fields _;
    struct Byte__Array* keySchedule;
    struct Byte__Array* byteBuff;
    struct UInt32__Array* dwordBuff;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DESTransform__Fields_FWDDECL)
#define IL2CPP_STRUCT_DESTransform__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/UInt32__Array.h>
#endif
#undef IL2CPP_STRUCT_DESTransform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DESTransform__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DESTransform__Fields_FWDDECL)
#include <Modloader/app/structs/DESTransform__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DESTransform__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
