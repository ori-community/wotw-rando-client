#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InternalCodePageDataItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InternalCodePageDataItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_InternalCodePageDataItem_DEFINED)
#define IL2CPP_STRUCT_InternalCodePageDataItem_DEFINED
struct String;
struct InternalCodePageDataItem {
    uint16_t codePage;
    uint16_t uiFamilyCodePage;
    uint32_t flags;
    struct String* Names;
};
#endif
#if !defined(IL2CPP_STRUCT_InternalCodePageDataItem_FWDDECL)
#define IL2CPP_STRUCT_InternalCodePageDataItem_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_InternalCodePageDataItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_InternalCodePageDataItem_DEFINED) && !defined(IL2CPP_STRUCT_InternalCodePageDataItem_FWDDECL)
#include <Modloader/app/structs/InternalCodePageDataItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InternalCodePageDataItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
