#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KeyValuePair_2_Link_Link__INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KeyValuePair_2_Link_Link__INITIALIZING
#if !defined(IL2CPP_STRUCT_KeyValuePair_2_Link_Link__DEFINED)
#define IL2CPP_STRUCT_KeyValuePair_2_Link_Link__DEFINED
struct Link;
struct KeyValuePair_2_Link_Link_ {
    struct Link* key;
    struct Link* value;
};
#endif
#if !defined(IL2CPP_STRUCT_KeyValuePair_2_Link_Link__FWDDECL)
#define IL2CPP_STRUCT_KeyValuePair_2_Link_Link__FWDDECL
#include <Modloader/app/structs/Link.h>
#endif
#undef IL2CPP_STRUCT_KeyValuePair_2_Link_Link__INITIALIZING
#if !defined(IL2CPP_STRUCT_KeyValuePair_2_Link_Link__DEFINED) && !defined(IL2CPP_STRUCT_KeyValuePair_2_Link_Link__FWDDECL)
#include <Modloader/app/structs/KeyValuePair_2_Link_Link_.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KeyValuePair_2_Link_Link_.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
