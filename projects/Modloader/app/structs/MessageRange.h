#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MessageRange_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MessageRange_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageRange_DEFINED)
#define IL2CPP_STRUCT_MessageRange_DEFINED
struct MessageRange {
    int32_t StartMessageId;
    int32_t EndMessageId;
};
#endif
#if !defined(IL2CPP_STRUCT_MessageRange_FWDDECL)
#define IL2CPP_STRUCT_MessageRange_FWDDECL
#endif
#undef IL2CPP_STRUCT_MessageRange_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageRange_DEFINED) && !defined(IL2CPP_STRUCT_MessageRange_FWDDECL)
#include <Modloader/app/structs/MessageRange.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MessageRange.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
