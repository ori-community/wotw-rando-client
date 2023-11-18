#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XNode__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XNode__Fields_DEFINED)
#include <Modloader/app/structs/XObject__Fields.h>
#if defined(IL2CPP_STRUCT_XObject__Fields_DEFINED)
#define IL2CPP_STRUCT_XNode__Fields_DEFINED
struct XNode;
struct XNode__Fields {
    struct XObject__Fields _;
    struct XNode* next;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XNode__Fields_FWDDECL)
#define IL2CPP_STRUCT_XNode__Fields_FWDDECL
#include <Modloader/app/structs/XNode.h>
#endif
#undef IL2CPP_STRUCT_XNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XNode__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XNode__Fields_FWDDECL)
#include <Modloader/app/structs/XNode__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XNode__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
