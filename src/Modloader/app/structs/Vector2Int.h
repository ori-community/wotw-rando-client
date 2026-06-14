#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Vector2Int_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Vector2Int_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vector2Int_DEFINED)
#define IL2CPP_STRUCT_Vector2Int_DEFINED
struct Vector2Int {
    int32_t m_X;
    int32_t m_Y;
};
#endif
#if !defined(IL2CPP_STRUCT_Vector2Int_FWDDECL)
#define IL2CPP_STRUCT_Vector2Int_FWDDECL
#endif
#undef IL2CPP_STRUCT_Vector2Int_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vector2Int_DEFINED) && !defined(IL2CPP_STRUCT_Vector2Int_FWDDECL)
#include <Modloader/app/structs/Vector2Int.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Vector2Int.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
