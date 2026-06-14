#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BoneWeight_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BoneWeight_INITIALIZING
#if !defined(IL2CPP_STRUCT_BoneWeight_DEFINED)
#define IL2CPP_STRUCT_BoneWeight_DEFINED
struct BoneWeight {
    float m_Weight0;
    float m_Weight1;
    float m_Weight2;
    float m_Weight3;
    int32_t m_BoneIndex0;
    int32_t m_BoneIndex1;
    int32_t m_BoneIndex2;
    int32_t m_BoneIndex3;
};
#endif
#if !defined(IL2CPP_STRUCT_BoneWeight_FWDDECL)
#define IL2CPP_STRUCT_BoneWeight_FWDDECL
#endif
#undef IL2CPP_STRUCT_BoneWeight_INITIALIZING
#if !defined(IL2CPP_STRUCT_BoneWeight_DEFINED) && !defined(IL2CPP_STRUCT_BoneWeight_FWDDECL)
#include <Modloader/app/structs/BoneWeight.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BoneWeight.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
