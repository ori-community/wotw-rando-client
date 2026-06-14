#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AudioSampleProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AudioSampleProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioSampleProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_AudioSampleProvider__Fields_DEFINED
struct AudioSampleProvider_ConsumeSampleFramesNativeFunction;
struct Object_1;
struct AudioSampleProvider_SampleFramesHandler;
struct __declspec(align(8)) AudioSampleProvider__Fields {
    struct AudioSampleProvider_ConsumeSampleFramesNativeFunction* m_ConsumeSampleFramesNativeFunction;
    uint32_t _id_k__BackingField;
    uint16_t _trackIndex_k__BackingField;
    struct Object_1* _owner_k__BackingField;
    uint16_t _channelCount_k__BackingField;
    uint32_t _sampleRate_k__BackingField;
    struct AudioSampleProvider_SampleFramesHandler* sampleFramesAvailable;
    struct AudioSampleProvider_SampleFramesHandler* sampleFramesOverflow;
};
#endif
#if !defined(IL2CPP_STRUCT_AudioSampleProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_AudioSampleProvider__Fields_FWDDECL
#include <Modloader/app/structs/AudioSampleProvider_ConsumeSampleFramesNativeFunction.h>
#include <Modloader/app/structs/AudioSampleProvider_SampleFramesHandler.h>
#include <Modloader/app/structs/Object_1.h>
#endif
#undef IL2CPP_STRUCT_AudioSampleProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioSampleProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AudioSampleProvider__Fields_FWDDECL)
#include <Modloader/app/structs/AudioSampleProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AudioSampleProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
