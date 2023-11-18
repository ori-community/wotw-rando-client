#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Variant_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Variant_INITIALIZING
#if !defined(IL2CPP_STRUCT_Variant_DEFINED)
#include <Modloader/app/structs/BRECORD.h>
#if defined(IL2CPP_STRUCT_BRECORD_DEFINED)
#define IL2CPP_STRUCT_Variant_DEFINED
struct Variant {
    int16_t vt;
    uint16_t wReserved1;
    uint16_t wReserved2;
    uint16_t wReserved3;
    int64_t llVal;
    int32_t lVal;
    uint8_t bVal;
    int16_t iVal;
    float fltVal;
    double dblVal;
    int16_t boolVal;
    void* bstrVal;
    int8_t cVal;
    uint16_t uiVal;
    uint32_t ulVal;
    uint64_t ullVal;
    int32_t intVal;
    uint32_t uintVal;
    void* pdispVal;
    struct BRECORD bRecord;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Variant_FWDDECL)
#define IL2CPP_STRUCT_Variant_FWDDECL
#endif
#undef IL2CPP_STRUCT_Variant_INITIALIZING
#if !defined(IL2CPP_STRUCT_Variant_DEFINED) && !defined(IL2CPP_STRUCT_Variant_FWDDECL)
#include <Modloader/app/structs/Variant.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Variant.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
