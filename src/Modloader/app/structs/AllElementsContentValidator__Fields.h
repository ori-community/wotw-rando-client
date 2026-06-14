#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AllElementsContentValidator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AllElementsContentValidator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AllElementsContentValidator__Fields_DEFINED)
#include <Modloader/app/structs/ContentValidator__Fields.h>
#if defined(IL2CPP_STRUCT_ContentValidator__Fields_DEFINED)
#define IL2CPP_STRUCT_AllElementsContentValidator__Fields_DEFINED
struct Hashtable;
struct Object__Array;
struct BitSet;
struct AllElementsContentValidator__Fields {
    struct ContentValidator__Fields _;
    struct Hashtable* elements;
    struct Object__Array* particles;
    struct BitSet* isRequired;
    int32_t countRequired;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AllElementsContentValidator__Fields_FWDDECL)
#define IL2CPP_STRUCT_AllElementsContentValidator__Fields_FWDDECL
#include <Modloader/app/structs/BitSet.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/Object__Array.h>
#endif
#undef IL2CPP_STRUCT_AllElementsContentValidator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AllElementsContentValidator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AllElementsContentValidator__Fields_FWDDECL)
#include <Modloader/app/structs/AllElementsContentValidator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AllElementsContentValidator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
