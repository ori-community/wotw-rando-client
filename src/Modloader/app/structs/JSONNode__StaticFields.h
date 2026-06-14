#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JSONNode__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JSONNode__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JSONNode__StaticFields_DEFINED)
#define IL2CPP_STRUCT_JSONNode__StaticFields_DEFINED
struct JSONNode;
struct JSONNode__StaticFields {
    struct JSONNode* InvalidNode;
    struct JSONNode* NullNode;
};
#endif
#if !defined(IL2CPP_STRUCT_JSONNode__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_JSONNode__StaticFields_FWDDECL
#include <Modloader/app/structs/JSONNode.h>
#endif
#undef IL2CPP_STRUCT_JSONNode__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JSONNode__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_JSONNode__StaticFields_FWDDECL)
#include <Modloader/app/structs/JSONNode__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JSONNode__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
