#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SortingLayer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SortingLayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_SortingLayer_DEFINED)
#define IL2CPP_STRUCT_SortingLayer_DEFINED
struct SortingLayer {
    int32_t m_Id;
};
#endif
#if !defined(IL2CPP_STRUCT_SortingLayer_FWDDECL)
#define IL2CPP_STRUCT_SortingLayer_FWDDECL
#endif
#undef IL2CPP_STRUCT_SortingLayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_SortingLayer_DEFINED) && !defined(IL2CPP_STRUCT_SortingLayer_FWDDECL)
#include <Modloader/app/structs/SortingLayer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SortingLayer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
