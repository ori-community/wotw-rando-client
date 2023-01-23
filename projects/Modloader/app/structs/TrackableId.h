#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TrackableId_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TrackableId_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrackableId_DEFINED)
#define IL2CPP_STRUCT_TrackableId_DEFINED
struct TrackableId {
    uint64_t m_SubId1;
    uint64_t m_SubId2;
};
#endif
#if !defined(IL2CPP_STRUCT_TrackableId_FWDDECL)
#define IL2CPP_STRUCT_TrackableId_FWDDECL
#endif
#undef IL2CPP_STRUCT_TrackableId_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrackableId_DEFINED) && !defined(IL2CPP_STRUCT_TrackableId_FWDDECL)
#include <Modloader/app/structs/TrackableId.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TrackableId.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
