#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlWellFormedWriter__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlWellFormedWriter__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlWellFormedWriter__StaticFields_DEFINED)
#define IL2CPP_STRUCT_XmlWellFormedWriter__StaticFields_DEFINED
struct String__Array;
struct WriteState__Enum__Array;
struct XmlWellFormedWriter_State__Enum__Array;
struct XmlWellFormedWriter__StaticFields {
    struct String__Array* stateName;
    struct String__Array* tokenName;
    struct WriteState__Enum__Array* state2WriteState;
    struct XmlWellFormedWriter_State__Enum__Array* StateTableDocument;
    struct XmlWellFormedWriter_State__Enum__Array* StateTableAuto;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlWellFormedWriter__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_XmlWellFormedWriter__StaticFields_FWDDECL
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/WriteState__Enum__Array.h>
#include <Modloader/app/structs/XmlWellFormedWriter_State__Enum__Array.h>
#endif
#undef IL2CPP_STRUCT_XmlWellFormedWriter__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlWellFormedWriter__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_XmlWellFormedWriter__StaticFields_FWDDECL)
#include <Modloader/app/structs/XmlWellFormedWriter__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlWellFormedWriter__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
