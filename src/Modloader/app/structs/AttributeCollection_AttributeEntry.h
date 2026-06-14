#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AttributeCollection_AttributeEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AttributeCollection_AttributeEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttributeCollection_AttributeEntry_DEFINED)
#define IL2CPP_STRUCT_AttributeCollection_AttributeEntry_DEFINED
struct Type;
struct AttributeCollection_AttributeEntry {
    struct Type* type;
    int32_t index;
};
#endif
#if !defined(IL2CPP_STRUCT_AttributeCollection_AttributeEntry_FWDDECL)
#define IL2CPP_STRUCT_AttributeCollection_AttributeEntry_FWDDECL
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_AttributeCollection_AttributeEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttributeCollection_AttributeEntry_DEFINED) && !defined(IL2CPP_STRUCT_AttributeCollection_AttributeEntry_FWDDECL)
#include <Modloader/app/structs/AttributeCollection_AttributeEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AttributeCollection_AttributeEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
