#include "wrap_types.h"
#include "wrap.h"

    //set properties of particle systems to be created
    funcEntry0(setDefaults, EVT_Void, etgSetDefaults)
    funcEntry1(setDrag, EVT_Void, etgSetDrag, EVT_Float)
    funcEntry1(setScale, EVT_Void, partSetScale, EVT_Float)
    funcEntry3(setXYZScale, EVT_Void, partSetXYZScale, EVT_Float, EVT_Float, EVT_Float)
    funcEntry1(setScaleDist, EVT_Void, partSetScaleDist, EVT_Float)
    funcEntry1(setDeltaScale, EVT_Void, partSetDeltaScale, EVT_Float)
    funcEntry1(setDeltaScaleDist, EVT_Void, partSetDeltaScaleDist, EVT_Float)
    funcEntry1(setOffsetLOF, EVT_Void, partSetOffsetLOF, EVT_Float)
    funcEntry1(setOffsetR, EVT_Void, partSetOffsetR, EVT_Float)
    funcEntry1(setOffsetTheta, EVT_Void, partSetOffsetTheta, EVT_Float)
    funcEntry1(setOffsetArray, EVT_Void, partSetOffsetArray, EVT_ConstLabel)
    funcEntry1(setDeltaLOF, EVT_Void, partSetDeltaLOF, EVT_Float)
    funcEntry1(setDeltaLOFDist, EVT_Void, partSetDeltaLOFDist, EVT_Float)
    funcEntry2(setDeltaR, EVT_Void, partSetDeltaR, EVT_Float, EVT_Float)
    funcEntry2(setDeltaRDist, EVT_Void, partSetDeltaRDist, EVT_Float, EVT_Float)
    funcEntry1(setVelLOF, EVT_Void, partSetVelLOF, EVT_Float)
    funcEntry1(setVelLOFDist, EVT_Void, partSetVelLOFDist, EVT_Float)
    funcEntry1(setVelR, EVT_Void, partSetVelR, EVT_Float)
    funcEntry1(setVelRDist, EVT_Void, partSetVelRDist, EVT_Float)
    //funcEntry1(setSpriteRot, EVT_Void, partSetAng, EVT_Float)
    funcEntry1(setSpriteRotAngle, EVT_Void, partSetAng, EVT_Float)
    funcEntry1(setDeltaVelLOF, EVT_Void, partSetDeltaVelLOF, EVT_Float)
    funcEntry1(setDeltaVelLOFDist, EVT_Void, partSetDeltaVelLOFDist, EVT_Float)
    funcEntry1(setDeltaVelR, EVT_Void, partSetDeltaVelR, EVT_Float)
    funcEntry1(setDeltaVelRDist, EVT_Void, partSetDeltaVelRDist, EVT_Float)
    funcEntry1(setSpriteRotDist, EVT_Void, partSetAngDist, EVT_Float)
    funcEntry1(setSpriteDeltaRot, EVT_Void, partSetAngDelta, EVT_Float)
    funcEntry1(setSpriteDeltaRotDist, EVT_Void, partSetAngDeltaDist, EVT_Float)
    funcEntry1(setColor, EVT_Void, etgSetColor, EVT_RGB)
    funcEntry3(setColorDist, EVT_Void, partSetColorDist, EVT_Float, EVT_Float, EVT_Float)
    funcEntry3(setDeltaColor, EVT_Void, partSetDeltaColor, EVT_Float, EVT_Float, EVT_Float)
    funcEntry3(setDeltaColorDist, EVT_Void, partSetDeltaColorDist, EVT_Float, EVT_Float, EVT_Float)
    funcEntry1(setColorA, EVT_Void, etgSetColorA, EVT_RGBA)
    funcEntry4(setColorADist, EVT_Void, partSetColorADist, EVT_Float, EVT_Float, EVT_Float, EVT_Float)
    funcEntry4(setDeltaColorA, EVT_Void, partSetDeltaColorA, EVT_Float, EVT_Float, EVT_Float, EVT_Float)
    funcEntry4(setDeltaColorADist, EVT_Void, partSetDeltaColorADist, EVT_Float, EVT_Float, EVT_Float, EVT_Float)
    funcEntry3(setAddColor, EVT_Void, partSetColorBias, EVT_Float, EVT_Float, EVT_Float)
    funcEntry3(setAddColorDist, EVT_Void, partSetColorBiasDist, EVT_Float, EVT_Float, EVT_Float)
    funcEntry1(setLighting, EVT_Void, partSetLighting, EVT_Int)
    funcEntry1(setIsWorldSpace, EVT_Void, partSetIsWorldspace, EVT_Int)
    funcEntry1(setVelocityInWorldSpace, EVT_Void, partSetVelocityInWorldSpace, EVT_Int)
    funcEntry1(setIllum, EVT_Void, partSetIllum, EVT_Float)
    funcEntry1(setIllumDist, EVT_Void, partSetIllumDist, EVT_Float)
    funcEntry1(setDeltaIllum, EVT_Void, partSetDeltaIllum, EVT_Float)
    funcEntry1(setDeltaIllumDist, EVT_Void, partSetDeltaIllumDist, EVT_Float)
    funcEntry1(setLifespan, EVT_Void, partSetLifespan, EVT_Float)
    funcEntry1(setLifespanDist, EVT_Void, partSetLifespanDist, EVT_Float)
    funcEntry1(setWaitSpan, EVT_Void, partSetWaitspan, EVT_Float)
    funcEntry1(setWaitSpanDist, EVT_Void, partSetWaitspanDist, EVT_Float)
    funcEntry1(setLength, EVT_Void, partSetLength, EVT_Float)
    funcEntry1(setLengthDist, EVT_Void, partSetLengthDist, EVT_Float)
    funcEntry1(setDeltaLength, EVT_Void, partSetDeltaLength, EVT_Float)
    funcEntry1(setDeltaLengthDist, EVT_Void, partSetDeltaLengthDist, EVT_Float)
    funcEntry1(setCircleSlices, EVT_Void, partSetSlices, EVT_Int)
    funcEntry3(setTumble, EVT_Void, partSetTumble, EVT_Float, EVT_Float, EVT_Float)
    funcEntry3(setDeltaTumble, EVT_Void, partSetDeltaTumble, EVT_Float, EVT_Float, EVT_Float)
    funcEntry3(setAnimation, EVT_Void, etgSetAnimation, EVT_ConstLabel, EVT_Float, EVT_Int)
    funcEntry3(setMeshAnimation, EVT_Void, etgSetMorphAnimation, EVT_ConstLabel, EVT_Float, EVT_Int)
    funcEntry1(setMeshStartFrame, EVT_Void, partSetMeshStartFrame, EVT_Float)
    funcEntry1(setFramerate, EVT_Void, partSetFramerate, EVT_Float)
    funcEntry1(setLoopFlag, EVT_Void, partSetLoopFlag, EVT_Int)
    funcEntry1(setStartFrame, EVT_Void, partSetStartFrame, EVT_Int)
    funcEntry1(setAlphaMode, EVT_Void, partSetAlphaMode, EVT_Int)
    funcEntry1(setSpecular, EVT_Void, etgSetSpecular, EVT_Float)
    funcEntry1(setColorScheme, EVT_Void, partSetColorScheme, EVT_Int)
    funcEntry1(setTrueBillboard, EVT_Void, partSetTrueBillboard, EVT_Int)
    funcEntry1(setPseudoBillboard, EVT_Void, partSetPseudoBillboard, EVT_Int)
    funcEntryR1(setDepthWrite, EVT_Void, etgSetDepthWrite, EVT_Int, etgDepthWriteResolve)

    //modify a current particle system
    funcEntry2(modifyDrag, EVT_Void, etgModifyDrag, EVT_Int, EVT_Float)
    funcEntry2(modifyScale, EVT_Void, partModifyScale, EVT_Int, EVT_Float)
    funcEntry2(modifyDeltaScale, EVT_Void, partModifyDeltaScale, EVT_Int, EVT_Float)
    funcEntry2(modifyDeltaLength, EVT_Void, partModifyDeltaLength, EVT_Int, EVT_Float)
    //funcEntry2(modifyColorA, EVT_Void, partModifyColorC, EVT_Int, EVT_RGBA)
    funcEntry2(modifyColor, EVT_Void, partModifyColorC, EVT_Int, EVT_RGB)
    funcEntry4(modifyColorBias, EVT_Void, partModifyColorBias, EVT_Int, EVT_Float, EVT_Float, EVT_Float)
    funcEntry2(modifyAddColor, EVT_Void, partModifyAddColor, EVT_Int, EVT_RGB)
    funcEntry5(modifyDeltaColor, EVT_Void, partModifyDeltaColor, EVT_Int, EVT_Float, EVT_Float, EVT_Float, EVT_Float)
    funcEntry2(modifyLighting, EVT_Void, partModifyLighting, EVT_Int, EVT_Float)
    funcEntry2(modifyIllum, EVT_Void, partModifyIllum, EVT_Int, EVT_Float)
    funcEntry2(modifyDeltaIllum, EVT_Void, partModifyDeltaIllum, EVT_Int, EVT_Float)
    funcEntry2(modifyLifespan, EVT_Void,  partModifyLifespan, EVT_Int, EVT_Float)
    funcEntry2(modifyAnimation, EVT_Void, partModifyAnimation, EVT_Int, EVT_ConstLabel)
    funcEntry2(modifyFramerate, EVT_Void, partModifyFramerate, EVT_Int, EVT_Float)
    funcEntry2(modifyVelLOF, EVT_Void, partModifyVelLOF, EVT_Int, EVT_Float)
    funcEntry2(modifyDeltaVelLOF, EVT_Void, partModifyDeltaVelLOF, EVT_Int, EVT_Float)
    funcEntry2(modifyVelR, EVT_Void, partModifyVelR, EVT_Int, EVT_Float)
    funcEntry2(modifyDeltaVelR, EVT_Void, partModifyDeltaVelR, EVT_Int, EVT_Float)
    funcEntry2(modifyMesh, EVT_Void, partModifyMesh, EVT_Int, EVT_Float)
    funcEntry2(modifyMeshAnimation, EVT_Void, partModifyMorph, EVT_Int, EVT_ConstLabel)
    funcEntry2(modifyMeshFramerate, EVT_Void, partModifyMorphFramerate, EVT_Int, EVT_Float)
    funcEntry2(modifyLength, EVT_Void, partModifyLength, EVT_Int, EVT_Float)
    funcEntry2(modifySpecular, EVT_Void, partModifyExponent, EVT_Int, EVT_Float)
    funcEntry2(modifyColorScheme, EVT_Void, partModifyColorScheme, EVT_Int, EVT_Int)
    funcEntry2(modifyAlphaMode, EVT_Void, partModifyAlphaMode, EVT_Int, EVT_Int)
    //funcEntry2(modifyTrueBillboard, EVT_Void, partModifyPseudoBillboard, EVT_Int, EVT_Int)
    funcEntry2(modifyPseudoBillboard, EVT_Void, partModifyPseudoBillboard, EVT_Int, EVT_Int)

    //create particles
    funcEntryThisR2(createSprites, EVT_Int, etgCreateSprites, EVT_Int, EVT_Int, etgCreationResolve)
    funcEntryThisR2(createCircles, EVT_Int, etgCreateCircles, EVT_Int, EVT_Int, etgCreationResolve)
    funcEntryThisR2(createPoints, EVT_Int, etgCreatePoints, EVT_Int, EVT_Int, etgCreationResolve)
    funcEntryThisR2(createLines, EVT_Int, etgCreateLines, EVT_Int, EVT_Int, etgCreationResolve)
    funcEntryThisR2(createMeshes, EVT_Int, etgCreateMeshes, EVT_Int, EVT_Int, etgCreationResolve)

    //Basic mathematics.  Need more?
    funcEntry1(inc, EVT_Int, etgInc, EVT_Int)
    funcEntry1(dec, EVT_Int, etgDec, EVT_Int)
    funcEntry2(fdiv, EVT_Float, etgFdiv, EVT_Float, EVT_Float)
    funcEntry2(fmult, EVT_Float, etgFmult, EVT_Float, EVT_Float)
    funcEntry2(fadd, EVT_Float, etgFadd, EVT_Float, EVT_Float)
    funcEntry2(fsub, EVT_Float, etgFsub, EVT_Float, EVT_Float)
    funcEntry2(div, EVT_Int, etgDiv, EVT_Int, EVT_Int)
    funcEntry2(mult, EVT_Int, etgMult, EVT_Int, EVT_Int)
    funcEntry2(add, EVT_Int, etgAdd, EVT_Int, EVT_Int)
    funcEntry2(sub, EVT_Int, etgSub, EVT_Int, EVT_Int)
    funcEntry1(sin, EVT_Float, etgSin, EVT_Float)
    funcEntry1(cos, EVT_Float, etgCos, EVT_Float)
    funcEntry2(frandom, EVT_Float, etgFRandom, EVT_Float, EVT_Float)
    funcEntry2(irandom, EVT_Int, etgIRandom, EVT_Int, EVT_Int)
    funcEntry6(crandom, EVT_RGB, etgCRandom, EVT_Int, EVT_Int, EVT_Int, EVT_Int, EVT_Int, EVT_Int)
    funcEntry8(carandom, EVT_RGBA, etgCARandom, EVT_Int, EVT_Int, EVT_Int, EVT_Int, EVT_Int, EVT_Int, EVT_Int, EVT_Int)

    //special-case functions
    funcEntryThis0(deleteParentShip, EVT_Int, etgParentShipDelete)
    funcEntryThis0(hideParentShip, EVT_Int, etgParentShipHide)
    funcEntryThis1(playSound, EVT_Int, soundEffect, EVT_Int)
    funcEntryThis1(playChatter, EVT_Int, etgChatterEventPlay, EVT_Int)
    funcEntryThis0(deathCries, EVT_Int, etgDeathCriesPlay)
    funcEntryThis0(getColorScheme, EVT_Int, etgOwnerColorSchemeGet)
    funcEntryThis0(getEffectVelocity,   EVT_Int, etgEffectVelocityGet)
    funcEntryThis0(damageDone, EVT_Int, etgDamageDone)

    //adjust parameters of effects to be spawned
    funcEntry1(setEffOffsetLOF,   EVT_Void, etgEffOffsetLOF,  EVT_Float)
    funcEntry2(setEffChangeLOF,   EVT_Void, etgEffChangeLOF,  EVT_Float, EVT_Float)
    funcEntry2(setEffOffsetR,     EVT_Void, etgEffOffsetR,    EVT_Float, EVT_Float)
    funcEntry3(setEffOffsetXYZ,   EVT_Void, etgEffOffsetXYZ , EVT_Float, EVT_Float, EVT_Float)
    funcEntry1(setEffOffsetVelLOF,EVT_Void, etgEffOffsetVelLOF,EVT_Float)
    funcEntry1(setEffOffsetSpin,  EVT_Void, etgEffOffsetSpin, EVT_Float)
    funcEntry1(setEffOffsetTime,  EVT_Void, etgEffOffsetTime, EVT_Float)
    funcEntryThis1(setEffOffsetDrag,  EVT_Void, etgEffOffsetDrag, EVT_Float)
    funcEntry1(setEffDrag,        EVT_Void, etgEffDrag      , EVT_Float)
    funcEntry0(setEffDefaults,    EVT_Void, etgEffDefaults)
    funcEntry1(setEffAttachParent,EVT_Void, etgEffAttachParent, EVT_Int)
    funcEntry1(setEffSpin,EVT_Void, etgEffSpin, EVT_Int)
    funcEntry1(setEffDeltaSpin,EVT_Void, etgEffDeltaSpin, EVT_Int)

    //adjust parameters of current effect
    funcEntryThis3(effModifyXYZ,  EVT_Void,    etgThisOffsetXYZ, EVT_Float, EVT_Float, EVT_Float)
    funcEntryThis1(effScaleVelocity,  EVT_Void,etgThisScaleVelocity, EVT_Float)
    funcEntryThis1(effModifySpin,  EVT_Void,   etgThisOffsetSpin, EVT_Float)
    funcEntryThis1(effModifyDeltaSpin,  EVT_Void,   etgThisOffsetDeltaSpin, EVT_Float)
    funcEntryThis1(effModifyOffsetTime,  EVT_Void,   etgThisOffsetTime, EVT_Float)
    funcEntryThis1(effModifyDrag,  EVT_Void,      etgThisSetDrag, EVT_Float)

    //convert types
    funcEntry1(float2Int,  EVT_Int,    etgFloat2Int, EVT_Float)
    funcEntry1(int2Float,  EVT_Float,    etgInt2Float, EVT_Int)
    funcEntry3(int2Color,  EVT_RGB,    etgInts2Color, EVT_Int, EVT_Int, EVT_Int)
    funcEntry4(int2ColorA,  EVT_RGB,    etgInts2ColorA, EVT_Int, EVT_Int, EVT_Int, EVT_Int)
    funcEntry3(floats2Color,  EVT_RGB,    etgFloats2Color, EVT_Float, EVT_Float, EVT_Float)
    funcEntry4(floats2ColorA,  EVT_RGB,    etgFloats2ColorA, EVT_Float, EVT_Float, EVT_Float, EVT_Float)