#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegexTree__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegexTree__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexTree__Fields_DEFINED)
#include <Modloader/app/structs/RegexOptions__Enum.h>
#if defined(IL2CPP_STRUCT_RegexOptions__Enum_DEFINED)
#define IL2CPP_STRUCT_RegexTree__Fields_DEFINED
struct RegexNode;
struct Hashtable;
struct Int32__Array;
struct String__Array;
struct __declspec(align(8)) RegexTree__Fields {
    struct RegexNode* _root;
    struct Hashtable* _caps;
    struct Int32__Array* _capnumlist;
    struct Hashtable* _capnames;
    struct String__Array* _capslist;
    RegexOptions__Enum _options;

    int32_t _captop;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RegexTree__Fields_FWDDECL)
#define IL2CPP_STRUCT_RegexTree__Fields_FWDDECL
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/RegexNode.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_RegexTree__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexTree__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RegexTree__Fields_FWDDECL)
#include <Modloader/app/structs/RegexTree__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegexTree__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
