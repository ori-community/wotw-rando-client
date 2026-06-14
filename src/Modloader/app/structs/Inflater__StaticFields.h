#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Inflater__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Inflater__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Inflater__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Inflater__StaticFields_DEFINED
struct Byte__Array;
struct Int32__Array;
struct Inflater__StaticFields {
    struct Byte__Array* extraLengthBits;
    struct Int32__Array* lengthBase;
    struct Int32__Array* distanceBasePosition;
    struct Byte__Array* codeOrder;
    struct Byte__Array* staticDistanceTreeTable;
};
#endif
#if !defined(IL2CPP_STRUCT_Inflater__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Inflater__StaticFields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Int32__Array.h>
#endif
#undef IL2CPP_STRUCT_Inflater__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Inflater__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Inflater__StaticFields_FWDDECL)
#include <Modloader/app/structs/Inflater__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Inflater__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
