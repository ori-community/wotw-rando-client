#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransformAccessArray_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransformAccessArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformAccessArray_DEFINED)
#define IL2CPP_STRUCT_TransformAccessArray_DEFINED
struct TransformAccessArray {
    void* m_TransformArray;
};
#endif
#if !defined(IL2CPP_STRUCT_TransformAccessArray_FWDDECL)
#define IL2CPP_STRUCT_TransformAccessArray_FWDDECL
#endif
#undef IL2CPP_STRUCT_TransformAccessArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformAccessArray_DEFINED) && !defined(IL2CPP_STRUCT_TransformAccessArray_FWDDECL)
#include <Modloader/app/structs/TransformAccessArray.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransformAccessArray.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
