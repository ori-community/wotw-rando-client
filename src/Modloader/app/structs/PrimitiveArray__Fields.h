#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PrimitiveArray__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PrimitiveArray__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PrimitiveArray__Fields_DEFINED)
#include <Modloader/app/structs/InternalPrimitiveTypeE__Enum.h>
#if defined(IL2CPP_STRUCT_InternalPrimitiveTypeE__Enum_DEFINED)
#define IL2CPP_STRUCT_PrimitiveArray__Fields_DEFINED
struct Boolean__Array;
struct Char__Array;
struct Double__Array;
struct Int16__Array;
struct Int32__Array;
struct Int64__Array;
struct SByte__Array;
struct Single__Array;
struct UInt16__Array;
struct UInt32__Array;
struct UInt64__Array;
struct __declspec(align(8)) PrimitiveArray__Fields {
    InternalPrimitiveTypeE__Enum code;

    struct Boolean__Array* booleanA;
    struct Char__Array* charA;
    struct Double__Array* doubleA;
    struct Int16__Array* int16A;
    struct Int32__Array* int32A;
    struct Int64__Array* int64A;
    struct SByte__Array* sbyteA;
    struct Single__Array* singleA;
    struct UInt16__Array* uint16A;
    struct UInt32__Array* uint32A;
    struct UInt64__Array* uint64A;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PrimitiveArray__Fields_FWDDECL)
#define IL2CPP_STRUCT_PrimitiveArray__Fields_FWDDECL
#include <Modloader/app/structs/Boolean__Array.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Double__Array.h>
#include <Modloader/app/structs/Int16__Array.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Int64__Array.h>
#include <Modloader/app/structs/SByte__Array.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/UInt16__Array.h>
#include <Modloader/app/structs/UInt32__Array.h>
#include <Modloader/app/structs/UInt64__Array.h>
#endif
#undef IL2CPP_STRUCT_PrimitiveArray__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PrimitiveArray__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PrimitiveArray__Fields_FWDDECL)
#include <Modloader/app/structs/PrimitiveArray__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PrimitiveArray__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
