#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SerObjectInfoInit__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SerObjectInfoInit__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerObjectInfoInit__Fields_DEFINED)
#define IL2CPP_STRUCT_SerObjectInfoInit__Fields_DEFINED
struct Hashtable;
struct SerStack;
struct __declspec(align(8)) SerObjectInfoInit__Fields {
    struct Hashtable* seenBeforeTable;
    int32_t objectInfoIdCount;
    struct SerStack* oiPool;
};
#endif
#if !defined(IL2CPP_STRUCT_SerObjectInfoInit__Fields_FWDDECL)
#define IL2CPP_STRUCT_SerObjectInfoInit__Fields_FWDDECL
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/SerStack.h>
#endif
#undef IL2CPP_STRUCT_SerObjectInfoInit__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerObjectInfoInit__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SerObjectInfoInit__Fields_FWDDECL)
#include <Modloader/app/structs/SerObjectInfoInit__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SerObjectInfoInit__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
